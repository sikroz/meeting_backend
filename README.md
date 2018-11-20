# Компиляция при помощи clang++
Здесь мы изучаем работу с компилятором, линковщиком

Перед вами файлы main.cpp и user.cpp - необходимо собрать бинарник hello.

Для начала выполним эту операцию вручную: 
```bash
clang++ -std=c++17 -c main.cpp -o main.o
clang++ -std=c++17 -c user.cpp -o user.o
clang++ main.o user.o
```

Аналогом этих действий будет являться запуск команды ```clang++ -std=c++17 main.cpp user.cpp``` она выполнит все те же операции и произведет файл ./a.out

Если всё получилось, значит на вашем компьютере установлен правильный clang, который поддерживает последний стандарт C++17.

# Сборка проекта при помощи make
**make** - утилита для сборки проектов. Она читает **Makefile** и выполняет инструкции, описанные в нем.

**make** умеет отслеживать изменения в файлах проекта и при повторном запуске пересобирать только те таргеты, которые нужно.

Находясь в каталоге с проектом делаем: ```make``` и видим наш бинарь hello

# Сборка проекта при помощи cmake
**Cmake** - тоже утилита для сборки проектов. Она читает файл **CMakeLists.txt**. Генерирует на его основе **Makefile** и затем уже собирает проект при помощи **make**. 

```bash
mkdir build # создаем временный каталог в котором будет производиться сборка
cd build # переходим в него
cmake .. # запускаем cmake с указанием каталога с CmakeLists.txt, для создания Makefile
make # запускаем make для сборки проекта
```