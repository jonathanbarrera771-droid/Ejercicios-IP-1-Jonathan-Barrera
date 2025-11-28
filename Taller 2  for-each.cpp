#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<int> calificaciones = {85, 92, 78, 65, 95, 88, 72, 60, 45, 80, 90, 67};
    
    // Variables para los cálculos
    double suma = 0;
    int maxima = calificaciones[0];
    int minima = calificaciones[0];
    int aprobados = 0;
    
    // Usando for-each para analizar las calificaciones
    for (int calificacion : calificaciones) {
        // Suma para el promedio
        suma += calificacion;
        
        // Encontrar calificación máxima
        if (calificacion > maxima) {
            maxima = calificacion;
        }
        
        // Encontrar calificación mínima
        if (calificacion < minima) {
            minima = calificacion;
        }
        
        // Contar aprobados
        if (calificacion >= 70) {
            aprobados++;
        }
    }
    
    // Calcular promedio
    double promedio = suma / calificaciones.size();
    
    // Mostrar resultados
    cout << "=== ANALISIS DE CALIFICACIONES ===" << endl;
    cout << "Total de estudiantes: " << calificaciones.size() << endl;
    cout << fixed << setprecision(2);
    cout << "Promedio del grupo: " << promedio << endl;
    cout << "Calificación mas alta: " << maxima << endl;
    cout << "Calificación mas baja: " << minima << endl;
    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << calificaciones.size() - aprobados << endl;
    
    // Mostrar todas las calificaciones usando for-each
    cout << "\nLista de calificaciones: ";
    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }
    cout << endl;
    
    return 0;
}