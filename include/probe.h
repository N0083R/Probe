#ifndef PROBE_H
    #define PROBE_H
        /* Includes */
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>

        /* Constants */
        const char * Black       = "\033[01;30m";
        const char * Red         = "\033[01;31m";
        const char * Green       = "\033[01;32m";
        const char * Yellow      = "\033[01;33m";
        const char * Blue        = "\033[01;34m";
        const char * Purple      = "\033[01;35m";
        const char * Cyan        = "\033[01;36m";
        const char * White       = "\033[01;37m";
        const char * Reset       = "\033[00m";
        const char * LeftCurly   = "{";
        const char * RightCurly  = "}";
        const char * LeftSquare  = "[";
        const char * RightSquare = "]";

        /* User defined types */
        typedef long unsigned int luint;
        
        struct ProbeReport
        {
            char *  filename;
            luint   probes;
            luint   successful_probes;
            luint   unsuccessful_probes;
            luint   data_size_bits;
            luint   data_size_bytes;
            luint   data_size_kilobytes;
            luint   word_count;
            luint   line_count;
            char ** data;
        };
        typedef struct ProbeReport probeReport;

        /* Procedures */        
        void probe_process_args(int argc, char ** argv);
        
        /*--contain:char, --contain:chars, --contain:word, --contain:words, --contain:all*/
        void probe_option_contain(probeReport * report, char * text_file, char * targets);
        
        /*--beginwith:char, --beginwith:chars, --beginwith:word, --beginwith:words*/
        void probe_option_beginwith(probeReport * report, char * text_file, char * targets);

        /*--endwith:char, --endwith:chars, --endwith:word, --endwith:words*/
        void probe_option_endwith(probeReport * report, char * text_file, char * targets);
#endif
