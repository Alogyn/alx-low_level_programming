#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header(const char *filename);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_class);
void print_data(unsigned char e_data);
void print_version(unsigned char e_version);
void print_osabi(unsigned char e_osabi);
void print_abi_version(unsigned char e_abiversion);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    display_elf_header(argv[1]);

    return 0;
}

void display_elf_header(const char *filename) {
    int fd = open(filename, O_RDONLY);
    Elf64_Ehdr elf_header;

    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
        exit(98);
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", filename);
        close(fd);
        exit(98);
    }

    close(fd);

    printf("ELF Header:\n");
    print_magic(elf_header.e_ident);
    print_class(elf_header.e_ident[EI_CLASS]);
    print_data(elf_header.e_ident[EI_DATA]);
    print_version(elf_header.e_ident[EI_VERSION]);
    print_osabi(elf_header.e_ident[EI_OSABI]);
    print_abi_version(elf_header.e_ident[EI_ABIVERSION]);
    print_type(elf_header.e_type);
    print_entry(elf_header.e_entry);
}


void print_magic(unsigned char *e_ident)
{
	int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x", e_ident[i]);
        if (i != EI_NIDENT - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

void print_class(unsigned char e_class) {
    printf("  Class:                             ");
    switch (e_class) {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown: %x>\n", e_class);
    }
}

void print_data(unsigned char e_data) {
    printf("  Data:                              ");
    switch (e_data) {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown: %x>\n", e_data);
    }
}

void print_version(unsigned char e_version) {
    printf("  Version:                           %d", e_version);
    if (e_version == EV_CURRENT) {
        printf(" (current)\n");
    } else {
        printf("\n");
    }
}

void print_osabi(unsigned char e_osabi) {
    printf("  OS/ABI:                            ");
    switch (e_osabi) {
        case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", e_osabi);
    }
}

void print_abi_version(unsigned char e_abiversion) {
    printf("  ABI Version:                       %d\n", e_abiversion);
}

void print_type(unsigned int e_type) {
    printf("  Type:                              ");
    switch (e_type) {
        case ET_NONE: printf("NONE (None)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown: %x>\n", e_type);
    }
}

void print_entry(unsigned long int e_entry) {
    printf("  Entry point address:               %#lx\n", e_entry);
}
