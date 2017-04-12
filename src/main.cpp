#include <iostream>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>         

// connecter a la base des donn�es 
int main() {
            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("teccpacs");
            bool ok = db.open();

            if (!ok) {
            std::cout << "error" << std::endl;
            return 1;
}
            else {
            std::cout << "ok" << std::endl;

            QSqlQuery query(db);
            if (!query.exec("PRAGMA foreign_keys = ON")) {
            std::cout << "Impossible d'activer le support des cl�s �trang�res." << std::endl;
            return 2;
}

            // cr�ation des tables
            //create_tables(db);


            return 0;
}
}