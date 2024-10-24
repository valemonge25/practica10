#define MEM_SIZE 256
#define MAX_INSTRUCTIONS 100
#define NUM_REGISTERS 2 
#define NUM_FLAGS 2

// Definimos para las banderas.
#define ZF 0 // Zero Flag .
#define NF 1 // Negative Flag .

typedef struct{  // Código de lo que es una instrucción
    char ints[6];         
    char op1;              
    int op2;               
} Instruction;

// Estructura que representa el procesador
typedef struct {       // Código de los datos especificados
    int memory[MEM_SIZE];
    int registers[NUM_REGISTERS];
    bool flags[NUM_FLAGS];
    int PC; // Contador de programa.
    Instruction code_memory[MAX_INSTRUCTIONS ]; // Memoria de instrucciones.
} Processor ;

// Funciones del procesador
void init_processor ( Processor *cpu); //Inicializa el procesador
void load_program ( Processor *cpu, const char *filename ) ; //Carga el programa
void update_flags ( Processor *cpu, int result) ; //Actualiza las
void alu_and_control_unity ( Processor *cpu) ;
void print ( Processor *cpu) ;
void fprint ( Processor *cpu) ;

procesador.c
  #include procesador.h
void init_processor ( Processor *cpu){
    memset(cpu -> memory, 0, 256);
    memset(cpu -> registers, 0, 2);
    memset(cpu -> flags, 0, 2);
    PC -> 0;
}

void load_program ( Processor *cpu, const char *filename ){
      

}
void update_flags ( Processor *cpu, int result){

}
void alu_and_control_unity ( Processor *cpu){

}
void print ( Processor *cpu){

}
void fprint ( Processor *cpu){

}
