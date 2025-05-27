
#include "struct.h"

void PrintStudent(Student &s){
    cout << "name: " << s.m_name 
         << ", Edad: " << s.m_age << endl;
}

void PrintStudent(Student *pStudent){
    PrintStudent(*pStudent);
}

// void PrintStudentY(Student &s){
//     PrintStudentY(&s);
// }

// void PrintStudentY(Student *pStudent){
//     cout << "name: " << pStudent->m_name 
//          << ", Edad: " << pStudent->m_age << endl;
// }

void DemoStructs(){

    // Manejo de struct estáticas
    Student s1;
    s1.m_name = "Juan";
    s1.m_age  = 20;
    PrintStudent(s1);
    // PrintStudentY(s1);
    // PrintStudentY(&s1);
    
    // Apuntando a una estructura
    Student *p1 = nullptr;
    p1 = &s1;
    p1->m_name = "Gabriela";
    PrintStudent(p1);   // PrintStudent(Student &s1);
    PrintStudent(*p1);  // PrintStudent(Student *pS);

    // Creando una estructura dinámica
    cout << "Ahora con un objeto dinámico" << endl;
    Student *p2 = nullptr;
    p2 = new Student;
    p2->m_name = "Alfonso";
    p2->m_age  = 30;
    PrintStudent(p2);
    PrintStudent(*p2);
    // PrintStudentY(p2);
    // PrintStudentY(*p2);
    delete p2; // Liberando el objeto apuntado por p2

    cout << "Vectores de struct dinamicas" <<endl;
    Student *pVS = nullptr;
    pVS = new Student[3];
    pVS[0].m_name = "Jorge";
    pVS[0].m_age  = 50;
    pVS[1].m_name = "Alex";
    pVS[1].m_age  = 40;

    // Las siguientes 5 formas son exactamente lo mismo !!!!
    // Estudiar con atención y probar en tu computador
    pVS[2].m_name = "Jaime";
    (pVS+2)->m_name = "Jaime";
    (*(pVS+2)).m_name = "Jaime";
    (*(2+pVS)).m_name = "Jaime";
    2[pVS].m_name = "Jaime";
    pVS[2].m_age  = 25;

    Student *pVX = nullptr;
    pVX = pVS + 2;
    pVX[-2].m_name = "Maria"; // Ojo indice negativo pero tiene sentido

    Student &rs = pVS[1];
    rs.m_age = 35;

    for(int i = 0 ; i < 3 ; ++i)
        PrintStudent(pVS[i]);
    //  PrintStudent(&pVS[i]);
    delete [] pVS;
}