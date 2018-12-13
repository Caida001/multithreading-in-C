#ifndef PS1_PRIORITY_READERS_AND_WRITERS_H_
#define PS1_PRIORITY_READERS_AND_WRITERS_H_

int main(int argc, char **argv);
void *readerMain(void *threadArgument);
void *writerMain(void *threadArgument);

#endif // PS1_PRIORITY_READERS_AND_WRITERS_H_
