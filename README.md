
---

## **CLI Project**
A custom Command-Line Interface (CLI) for handling `mkhost`, `lshost`, and other storage-related operations using C.

---

## **Table of Contents**
- [Introduction](#introduction)  
- [Features](#features)  
- [Project Structure](#project-structure)  
- [Build and Run](#build-and-run)  
- [Commands](#commands)  
- [Makefile](#makefile)  
- [Contribution](#contribution)  
- [License](#license)  

---

## 📝 **Introduction**
This CLI project is designed to manage host data and related storage configurations. The project includes key operations such as adding and listing host information and handling underlying system-level tasks.

---

## 🚀 **Features**
✅ Create a new host using `mkhost`  
✅ List existing hosts using `lshost`  
✅ Centralized storage of host details  
✅ Efficient memory handling with caching  

---

## 📂 **Project Structure**
```
├── include/
│   └── utod.h           # Header file for UTOD struct and functions
├── src2/
│   ├── main.c           # Main entry point
│   ├── cli_mkhost.c     # Command to create host
│   ├── cli_lshost.c     # Command to list host
│   ├── utod.c           # Memory allocation and handling functions
│   ├── utask.c          # Data handling functions
│   ├── icoc.c           # Additional command handling
│   └── error.c          # Error handling functions
├── .gitignore           # Files to ignore in version control
├── Makefile             # Build instructions
└── README.md            # Project documentation
```

---

## ⚙️ **Build and Run**
### **1. Build the project**  
Open a terminal and run:  
```bash
make
```

### **2. Run the CLI**  
```bash
./cli
```

### **3. Clean the build**  
To remove compiled files:  
```bash
make clean
```

---

## 🖥️ **Commands**
| Command | Description |
|---------|-------------|
| `mkhost` | Create a new host entry |
| `lshost` | List all stored hosts |
| `--help` | Show available commands |

---

## 🔨 **Makefile Explanation**
The `Makefile` handles the compilation and cleanup:
```makefile
CC = gcc
CFLAGS = -Wall -g -Iinclude

SRC = src2/main.c src2/cli_mkhost.c src2/cli_lshost.c src2/utod.c src2/utask.c src2/icoc.c src2/error.c
OBJ = $(SRC:.c=.o)
OUT = cli

all: $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

clean:
	rm -f $(OBJ) $(OUT)
```
- `CC` – Compiler used (gcc)  
- `CFLAGS` – Compiler flags for warnings and debugging  
- `SRC` – List of source files  
- `OBJ` – Compiled object files  
- `OUT` – Output binary  
- `all` – Compiles the project  
- `clean` – Removes generated files  

---

## 🏗️ **How It Works**
1. **UTOD Struct**  
   - `utod.h` defines the `UTOD` structure and `allocate_utod` function.
   - `allocate_utod` uses `malloc` to allocate memory and `memset` to clear it.

2. **Command Handling**  
   - `mkhost` – Stores new host details  
   - `lshost` – Lists all available host data  

3. **Data Handling**  
   - `utask.c` – Handles data processing  
   - `icoc.c` – Contains utility commands  

---

## 🌍 **Contribution**
1. Fork the repository  
2. Create a new branch  
3. Make changes and commit  
4. Submit a pull request  

---

## 📄 **License**
This project is licensed under the Kaushal License.  

---

