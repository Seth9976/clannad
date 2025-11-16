// 函数: sub_43b510
// 地址: 0x43b510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x1018)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp

if (sub_4d0fe0(arg2.b, "#WINDOW.", ecx, 8) != 0)
    sub_5f02dd(arg1 ^ &__saved_ebp)
    return 1

int32_t var_1010
int32_t* var_14 = &var_1010
char* var_100c = &ecx[8]
int32_t eax_5 = sub_4d11d0(&var_1010, &var_100c, &ecx[8], var_14)
void* edi_3

if (eax_5 != 0)
    edi_3 = 1
else
    int32_t edi_2 = var_1010
    
    if (edi_2 u> 0x3f)
        edi_3 = 1
    else
        int32_t eax_6 = sub_434540(eax_5.b, &var_100c, var_100c, ".")
        
        if (eax_6 != 0)
            edi_3 = 1
        else
            char* ecx_3 = var_100c
            char* var_14_2 = "POS="
            (&data_1090ae4)[edi_2 * 0x75] = 1
            int32_t eax_7 = sub_434540(eax_6.b, &var_100c, ecx_3, var_14_2)
            char* ecx_4 = var_100c
            char** edx_4 = &var_100c
            void* var_1014
            int32_t* var_1008
            void* var_1004
            
            if (eax_7 != 0)
                int32_t eax_19 = sub_434540(eax_7.b, edx_4, ecx_4, "NAME_")
                char* ecx_8 = var_100c
                void** edx_7 = &var_100c
                
                if (eax_19 != 0)
                    int32_t eax_60 = sub_434540(eax_19.b, edx_7, ecx_8, "LUBY_")
                    char* ecx_25 = var_100c
                    void** edx_18 = &var_100c
                    
                    if (eax_60 != 0)
                        int32_t eax_65 = sub_434540(eax_60.b, edx_18, ecx_25, "MOJI_")
                        char* ecx_27 = var_100c
                        void** edx_20 = &var_100c
                        void* var_1000
                        void* var_ffc
                        
                        if (eax_65 != 0)
                            int32_t eax_90 = sub_434540(eax_65.b, edx_20, ecx_27, "KEYCUR_")
                            char* ecx_45 = var_100c
                            void** edx_28 = &var_100c
                            
                            if (eax_90 != 0)
                                int32_t eax_103 = sub_434540(eax_90.b, edx_28, ecx_45, "ANM_")
                                char* ecx_53 = var_100c
                                void** edx_32 = &var_100c
                                
                                if (eax_103 != 0)
                                    int32_t eax_104 =
                                        sub_434540(eax_103.b, edx_32, ecx_53, "OPEN_ANM_")
                                    char* ecx_55 = var_100c
                                    void** edx_34 = &var_100c
                                    
                                    if (eax_104 != 0)
                                        int32_t eax_113 =
                                            sub_434540(eax_104.b, edx_34, ecx_55, "CLOSE_ANM_")
                                        char* ecx_58 = var_100c
                                        void** edx_37 = &var_100c
                                        
                                        if (eax_113 != 0)
                                            int32_t eax_122 =
                                                sub_434540(eax_113.b, edx_37, ecx_58, "WAKU_")
                                            char* ecx_61 = var_100c
                                            void** edx_40 = &var_100c
                                            
                                            if (eax_122 != 0)
                                                int32_t eax_133
                                                int32_t* ecx_67
                                                eax_133, ecx_67 = sub_434540(eax_122.b, edx_40, 
                                                    ecx_61, "NOVELBACK=")
                                                char** edx_44 = &var_100c
                                                
                                                if (eax_133 != 0)
                                                    int32_t eax_140
                                                    int32_t* ecx_70
                                                    eax_140, ecx_70 = sub_434540(eax_133.b, edx_44, 
                                                        var_100c, "ATTR=")
                                                    char** edx_45 = &var_100c
                                                    int32_t var_ff8
                                                    
                                                    if (eax_140 != 0)
                                                        int32_t eax_148 = sub_434540(eax_140.b, 
                                                            edx_45, var_100c, "ATTR_MOD=")
                                                        char* ecx_73 = var_100c
                                                        char** edx_46 = &var_100c
                                                        
                                                        if (eax_148 != 0)
                                                            int32_t eax_152 = sub_434540(eax_148.b, 
                                                                edx_46, ecx_73, "MOVE_USE=")
                                                            char* ecx_74 = var_100c
                                                            char** edx_47 = &var_100c
                                                            
                                                            if (eax_152 != 0)
                                                                int32_t eax_155 = sub_434540(eax_152.b, 
                                                                    edx_47, ecx_74, "CLEAR_USE=")
                                                                char* ecx_75 = var_100c
                                                                char** edx_48 = &var_100c
                                                                
                                                                if (eax_155 != 0)
                                                                    int32_t eax_158 = sub_434540(eax_155.b, 
                                                                        edx_48, ecx_75, "READJUMP_USE=")
                                                                    char* ecx_76 = var_100c
                                                                    char** edx_49 = &var_100c
                                                                    
                                                                    if (eax_158 != 0)
                                                                        int32_t eax_161 = sub_434540(eax_158.b, 
                                                                            edx_49, ecx_76, "AUTOMODE_USE=")
                                                                        char* ecx_77 = var_100c
                                                                        char** edx_50 = &var_100c
                                                                        
                                                                        if (eax_161 != 0)
                                                                            int32_t eax_164 = sub_434540(eax_161.b, 
                                                                                edx_50, ecx_77, "KOEPLAY_USE=")
                                                                            char* ecx_78 = var_100c
                                                                            char** edx_51 = &var_100c
                                                                            
                                                                            if (eax_164 != 0)
                                                                                int32_t eax_167 = sub_434540(eax_164.b, 
                                                                                    edx_51, ecx_78, "MSGBK_USE=")
                                                                                char* ecx_79 = var_100c
                                                                                char** edx_52 = &var_100c
                                                                                
                                                                                if (eax_167 != 0)
                                                                                    int32_t eax_170 = sub_434540(eax_167.b, 
                                                                                        edx_52, ecx_79, "MSGBKLEFT_USE=")
                                                                                    char* ecx_80 = var_100c
                                                                                    char** edx_53 = &var_100c
                                                                                    
                                                                                    if (eax_170 != 0)
                                                                                        int32_t eax_173 = sub_434540(eax_170.b, 
                                                                                            edx_53, ecx_80, "MSGBKRIGHT_USE=")
                                                                                        char* ecx_81 = var_100c
                                                                                        char** edx_54 = &var_100c
                                                                                        
                                                                                        if (eax_173 != 0)
                                                                                            int32_t eax_176 = sub_434540(eax_173.b, 
                                                                                                edx_54, ecx_81, "EXBTN_")
                                                                                            char* ecx_82 = var_100c
                                                                                            char** edx_55 = &var_100c
                                                                                            
                                                                                            if (eax_176 != 0)
                                                                                                int32_t eax_182 = sub_434540(eax_176.b, 
                                                                                                    edx_55, ecx_82, "MSGBK_BACKUP=")
                                                                                                char* ecx_85 = var_100c
                                                                                                char** edx_58 = &var_100c
                                                                                                
                                                                                                if (eax_182 != 0)
                                                                                                    int32_t eax_186 = sub_434540(eax_182.b, 
                                                                                                        edx_58, ecx_85, "MESSAGE_MOD=")
                                                                                                    char* ecx_86 = var_100c
                                                                                                    char** edx_59 = &var_100c
                                                                                                    
                                                                                                    if (eax_186 != 0)
                                                                                                        int32_t eax_190 = sub_434540(eax_186.b, 
                                                                                                            edx_59, ecx_86, "SELCOM_USE=")
                                                                                                        char* ecx_87 = var_100c
                                                                                                        char** edx_60 = &var_100c
                                                                                                        
                                                                                                        if (eax_190 != 0)
                                                                                                            int32_t eax_194
                                                                                                            int32_t* ecx_88
                                                                                                            eax_194, ecx_88 = sub_434540(eax_190.b, 
                                                                                                                edx_60, ecx_87, "SELCOM_SETPOS=")
                                                                                                            char** edx_61 = &var_100c
                                                                                                            
                                                                                                            if (eax_194 != 0)
                                                                                                                int32_t eax_201 = sub_434540(eax_194.b, 
                                                                                                                    edx_61, var_100c, "SELCOM_MOJIPOS=")
                                                                                                                char* ecx_91 = var_100c
                                                                                                                char** edx_62 = &var_100c
                                                                                                                
                                                                                                                if (eax_201 != 0)
                                                                                                                    int32_t eax_205 = sub_434540(eax_201.b, 
                                                                                                                        edx_62, ecx_91, "SELCOM_CURSORSELECT=")
                                                                                                                    char* ecx_92 = var_100c
                                                                                                                    char** edx_63 = &var_100c
                                                                                                                    
                                                                                                                    if (eax_205 != 0)
                                                                                                                        int32_t eax_209 = sub_434540(eax_205.b, 
                                                                                                                            edx_63, ecx_92, "SELCOM_CURSORNO=")
                                                                                                                        char* ecx_93 = var_100c
                                                                                                                        char** edx_64 = &var_100c
                                                                                                                        
                                                                                                                        if (eax_209 != 0)
                                                                                                                            int32_t eax_213 = sub_434540(eax_209.b, 
                                                                                                                                edx_64, ecx_93, "SELCOM_MOJIDARK=")
                                                                                                                            char* ecx_94 = var_100c
                                                                                                                            char** edx_65 = &var_100c
                                                                                                                            
                                                                                                                            if (eax_213 != 0)
                                                                                                                                int32_t eax_217 = sub_434540(eax_213.b, 
                                                                                                                                    edx_65, ecx_94, "SELCOM_MOUSESET=")
                                                                                                                                char* ecx_95 = var_100c
                                                                                                                                char** edx_66 = &var_100c
                                                                                                                                
                                                                                                                                if (eax_217 != 0)
                                                                                                                                    int32_t eax_221 = sub_434540(eax_217.b, 
                                                                                                                                        edx_66, ecx_95, "R_COMMAND_MOD=")
                                                                                                                                    char* ecx_96 = var_100c
                                                                                                                                    char** edx_67 = &var_100c
                                                                                                                                    
                                                                                                                                    if (eax_221 != 0)
                                                                                                                                        int32_t eax_225 = sub_434540(eax_221.b, 
                                                                                                                                            edx_67, ecx_96, "INDENT_USE=")
                                                                                                                                        char* ecx_97 = var_100c
                                                                                                                                        char** edx_68 = &var_100c
                                                                                                                                        
                                                                                                                                        if (eax_225 != 0)
                                                                                                                                            int32_t eax_228 = sub_434540(eax_225.b, 
                                                                                                                                                edx_68, ecx_97, "KINSOKU_USE=")
                                                                                                                                            char* ecx_98 = var_100c
                                                                                                                                            void** edx_69 = &var_100c
                                                                                                                                            
                                                                                                                                            if (eax_228 != 0)
                                                                                                                                                int32_t eax_231
                                                                                                                                                int32_t* ecx_99
                                                                                                                                                eax_231, ecx_99 = sub_434540(eax_228.b, 
                                                                                                                                                    edx_69, ecx_98, "MSGBK_MOJI_COLOR=")
                                                                                                                                                char** edx_70 = &var_100c
                                                                                                                                                
                                                                                                                                                if (eax_231 != 0)
                                                                                                                                                    if (sub_434540(eax_231.b, edx_70, 
                                                                                                                                                            var_100c, "FACE.") != 0)
                                                                                                                                                        edi_3 = 1
                                                                                                                                                    else
                                                                                                                                                        int32_t eax_238 = sub_4d11d0(&var_1014, 
                                                                                                                                                            &var_100c, var_100c, &var_1014)
                                                                                                                                                        
                                                                                                                                                        if (eax_238 != 0)
                                                                                                                                                            edi_3 = 1
                                                                                                                                                        else
                                                                                                                                                            void* esi_4 = var_1014
                                                                                                                                                            
                                                                                                                                                            if (esi_4 u> 7)
                                                                                                                                                                edi_3 = 1
                                                                                                                                                            else
                                                                                                                                                                int32_t eax_239
                                                                                                                                                                int32_t* ecx_104
                                                                                                                                                                eax_239, ecx_104 = sub_434540(
                                                                                                                                                                    eax_238.b, &var_100c, var_100c, "=")
                                                                                                                                                                
                                                                                                                                                                if (eax_239 != 0)
                                                                                                                                                                    edi_3 = 1
                                                                                                                                                                else
                                                                                                                                                                    void* esi_5 = &(&data_1090ae4)[
                                                                                                                                                                        edi_2 * 0x75 + esi_4 * 5]
                                                                                                                                                                    int32_t* var_14_124 = &var_1010
                                                                                                                                                                    edi_3 = sub_4d1280(&var_1008, 
                                                                                                                                                                        &var_100c, var_100c, &var_1008, ecx_104)
                                                                                                                                                                    
                                                                                                                                                                    if (edi_3 != 0)
                                                                                                                                                                        edi_3 = 1
                                                                                                                                                                    else
                                                                                                                                                                        *(esi_5 + 0x134) = var_1008
                                                                                                                                                                        *(esi_5 + 0x138) = var_1004
                                                                                                                                                                        *(esi_5 + 0x13c) = var_1000
                                                                                                                                                                        *(esi_5 + 0x140) = var_ffc
                                                                                                                                                                        *(esi_5 + 0x144) = var_ff8
                                                                                                                                                else
                                                                                                                                                    int32_t* var_14_120 = &var_1010
                                                                                                                                                    edi_3 = sub_4d1280(&var_1008, edx_70, 
                                                                                                                                                        var_100c, &var_1008, ecx_99)
                                                                                                                                                    
                                                                                                                                                    if (edi_3 != 0)
                                                                                                                                                        edi_3 = 1
                                                                                                                                                    else
                                                                                                                                                        *(edi_2 * 0x1d4 + 0x1090c10) = var_1008
                                                                                                                                                        *(edi_2 * 0x1d4 + 0x1090c14) = var_1004
                                                                                                                                            else
                                                                                                                                                void* eax_230 = sub_4d11d0(&var_1008, 
                                                                                                                                                    edx_69, ecx_98, &var_1008)
                                                                                                                                                edi_3 = eax_230
                                                                                                                                                
                                                                                                                                                if (edi_3 != 0)
                                                                                                                                                    edi_3 = 1
                                                                                                                                                else
                                                                                                                                                    eax_230.b = var_1008 != eax_230
                                                                                                                                                    *(edi_2 * 0x1d4 + 0x1090c0c) = eax_230
                                                                                                                                        else
                                                                                                                                            void* eax_227 = sub_4d11d0(&var_1008, 
                                                                                                                                                edx_68, ecx_97, &var_1008)
                                                                                                                                            edi_3 = eax_227
                                                                                                                                            
                                                                                                                                            if (edi_3 != 0)
                                                                                                                                                edi_3 = 1
                                                                                                                                            else
                                                                                                                                                eax_227.b = var_1008 != eax_227
                                                                                                                                                *(edi_2 * 0x1d4 + 0x1090c04) = eax_227
                                                                                                                                    else
                                                                                                                                        edi_3 = sub_4d11d0(&var_1008, edx_67, 
                                                                                                                                            ecx_96, &var_1008)
                                                                                                                                        
                                                                                                                                        if (edi_3 != 0)
                                                                                                                                            edi_3 = 1
                                                                                                                                        else
                                                                                                                                            *(edi_2 * 0x1d4 + 0x1090b28) = var_1008
                                                                                                                                else
                                                                                                                                    edi_3 = sub_4d11d0(&var_1008, edx_66, 
                                                                                                                                        ecx_95, &var_1008)
                                                                                                                                    
                                                                                                                                    if (edi_3 != 0)
                                                                                                                                        edi_3 = 1
                                                                                                                                    else
                                                                                                                                        *(edi_2 * 0x1d4 + 0x1090bfc) = var_1008
                                                                                                                            else
                                                                                                                                edi_3 = sub_4d11d0(&var_1008, edx_65, 
                                                                                                                                    ecx_94, &var_1008)
                                                                                                                                
                                                                                                                                if (edi_3 != 0)
                                                                                                                                    edi_3 = 1
                                                                                                                                else
                                                                                                                                    int32_t* eax_216 = var_1008
                                                                                                                                    
                                                                                                                                    if (eax_216 s>= 0)
                                                                                                                                        if (eax_216 s> 0xff)
                                                                                                                                            eax_216 = 0xff
                                                                                                                                        
                                                                                                                                        *(edi_2 * 0x1d4 + 0x1090bf8) = eax_216
                                                                                                                                    else
                                                                                                                                        *(edi_2 * 0x1d4 + 0x1090bf8) = 0
                                                                                                                        else
                                                                                                                            edi_3 = sub_4d11d0(&var_1008, edx_64, 
                                                                                                                                ecx_93, &var_1008)
                                                                                                                            
                                                                                                                            if (edi_3 != 0)
                                                                                                                                edi_3 = 1
                                                                                                                            else
                                                                                                                                *(edi_2 * 0x1d4 + 0x1090bf4) = var_1008
                                                                                                                    else
                                                                                                                        edi_3 = sub_4d11d0(&var_1008, edx_63, 
                                                                                                                            ecx_92, &var_1008)
                                                                                                                        
                                                                                                                        if (edi_3 != 0)
                                                                                                                            edi_3 = 1
                                                                                                                        else
                                                                                                                            *(edi_2 * 0x1d4 + 0x1090bf0) = var_1008
                                                                                                                else
                                                                                                                    edi_3 = sub_4d11d0(&var_1008, edx_62, 
                                                                                                                        ecx_91, &var_1008)
                                                                                                                    
                                                                                                                    if (edi_3 != 0)
                                                                                                                        edi_3 = 1
                                                                                                                    else
                                                                                                                        *(edi_2 * 0x1d4 + 0x1090bec) = var_1008
                                                                                                            else
                                                                                                                int32_t* var_14_102 = &var_1010
                                                                                                                edi_3 = sub_4d1280(&var_1008, edx_61, 
                                                                                                                    var_100c, &var_1008, ecx_88)
                                                                                                                
                                                                                                                if (edi_3 != 0)
                                                                                                                    edi_3 = 1
                                                                                                                else
                                                                                                                    *(edi_2 * 0x1d4 + 0x1090bdc) = var_1008
                                                                                                                    *(edi_2 * 0x1d4 + 0x1090be0) = var_1004
                                                                                                                    *(edi_2 * 0x1d4 + 0x1090be4) = var_1000
                                                                                                                    *(edi_2 * 0x1d4 + 0x1090be8) = var_ffc
                                                                                                        else
                                                                                                            edi_3 = sub_4d11d0(&var_1008, edx_60, 
                                                                                                                ecx_87, &var_1008)
                                                                                                            
                                                                                                            if (edi_3 != 0)
                                                                                                                edi_3 = 1
                                                                                                            else
                                                                                                                *(edi_2 * 0x1d4 + 0x1090bd8) = var_1008
                                                                                                    else
                                                                                                        edi_3 = sub_4d11d0(&var_1008, edx_59, 
                                                                                                            ecx_86, &var_1008)
                                                                                                        
                                                                                                        if (edi_3 != 0)
                                                                                                            edi_3 = 1
                                                                                                        else
                                                                                                            *(edi_2 * 0x1d4 + 0x1090bd4) = var_1008
                                                                                                else
                                                                                                    edi_3 = sub_4d11d0(&var_1008, edx_58, 
                                                                                                        ecx_85, &var_1008)
                                                                                                    
                                                                                                    if (edi_3 != 0)
                                                                                                        edi_3 = 1
                                                                                                    else
                                                                                                        *(edi_2 * 0x1d4 + 0x1090bd0) = var_1008
                                                                                            else
                                                                                                int32_t eax_178 = sub_4d11d0(&var_1014, 
                                                                                                    edx_55, ecx_82, &var_1014)
                                                                                                
                                                                                                if (eax_178 != 0)
                                                                                                    edi_3 = 1
                                                                                                else
                                                                                                    void* esi_3 = var_1014
                                                                                                    
                                                                                                    if (esi_3 u> 7)
                                                                                                        edi_3 = 1
                                                                                                    else if (sub_434540(eax_178.b, 
                                                                                                            &var_100c, var_100c, "_USE=") != 0)
                                                                                                        edi_3 = 1
                                                                                                    else
                                                                                                        edi_3 = sub_4d11d0(&var_1008, 
                                                                                                            &var_100c, var_100c, &var_1008)
                                                                                                        
                                                                                                        if (edi_3 != 0)
                                                                                                            edi_3 = 1
                                                                                                        else
                                                                                                            void* eax_181
                                                                                                            eax_181.b = var_1008.b
                                                                                                            *(esi_3 + &(&data_1090ae4)[edi_2 * 0x75]
                                                                                                                + 0xd1) = eax_181.b
                                                                                        else
                                                                                            edi_3 = sub_4d11d0(&var_1008, edx_54, 
                                                                                                ecx_81, &var_1008)
                                                                                            
                                                                                            if (edi_3 != 0)
                                                                                                edi_3 = 1
                                                                                            else
                                                                                                void* eax_175
                                                                                                eax_175.b = var_1008.b
                                                                                                *(edi_2 * 0x1d4 + 0x1090bb4) = eax_175.b
                                                                                    else
                                                                                        edi_3 = sub_4d11d0(&var_1008, edx_53, 
                                                                                            ecx_80, &var_1008)
                                                                                        
                                                                                        if (edi_3 != 0)
                                                                                            edi_3 = 1
                                                                                        else
                                                                                            void* eax_172
                                                                                            eax_172.b = var_1008.b
                                                                                            *(edi_2 * 0x1d4 + 0x1090bb3) = eax_172.b
                                                                                else
                                                                                    edi_3 = sub_4d11d0(&var_1008, edx_52, 
                                                                                        ecx_79, &var_1008)
                                                                                    
                                                                                    if (edi_3 != 0)
                                                                                        edi_3 = 1
                                                                                    else
                                                                                        void* eax_169
                                                                                        eax_169.b = var_1008.b
                                                                                        *(edi_2 * 0x1d4 + 0x1090bb2) = eax_169.b
                                                                            else
                                                                                edi_3 = sub_4d11d0(&var_1008, edx_51, 
                                                                                    ecx_78, &var_1008)
                                                                                
                                                                                if (edi_3 != 0)
                                                                                    edi_3 = 1
                                                                                else
                                                                                    void* eax_166
                                                                                    eax_166.b = var_1008.b
                                                                                    *(edi_2 * 0x1d4 + 0x1090bbf) = eax_166.b
                                                                        else
                                                                            edi_3 = sub_4d11d0(&var_1008, edx_50, 
                                                                                ecx_77, &var_1008)
                                                                            
                                                                            if (edi_3 != 0)
                                                                                edi_3 = 1
                                                                            else
                                                                                void* eax_163
                                                                                eax_163.b = var_1008.b
                                                                                *(edi_2 * 0x1d4 + 0x1090bbe) = eax_163.b
                                                                    else
                                                                        edi_3 = sub_4d11d0(&var_1008, edx_49, 
                                                                            ecx_76, &var_1008)
                                                                        
                                                                        if (edi_3 != 0)
                                                                            edi_3 = 1
                                                                        else
                                                                            void* eax_160
                                                                            eax_160.b = var_1008.b
                                                                            *(edi_2 * 0x1d4 + 0x1090bbd) = eax_160.b
                                                                else
                                                                    edi_3 = sub_4d11d0(&var_1008, edx_48, 
                                                                        ecx_75, &var_1008)
                                                                    
                                                                    if (edi_3 != 0)
                                                                        edi_3 = 1
                                                                    else
                                                                        void* eax_157
                                                                        eax_157.b = var_1008.b
                                                                        *(edi_2 * 0x1d4 + 0x1090bb1) = eax_157.b
                                                            else
                                                                edi_3 = sub_4d11d0(&var_1008, edx_47, 
                                                                    ecx_74, &var_1008)
                                                                
                                                                if (edi_3 != 0)
                                                                    edi_3 = 1
                                                                else
                                                                    void* eax_154
                                                                    eax_154.b = var_1008.b
                                                                    *(edi_2 * 0x1d4 + 0x1090bb0) = eax_154.b
                                                        else
                                                            edi_3 = sub_4d11d0(&var_1008, edx_46, 
                                                                ecx_73, &var_1008)
                                                            
                                                            if (edi_3 != 0)
                                                                edi_3 = 1
                                                            else
                                                                *(edi_2 * 0x1d4 + 0x1090b88) = var_1008
                                                    else
                                                        int32_t* var_14_72 = &var_1010
                                                        edi_3 = sub_4d1280(&var_1008, edx_45, 
                                                            var_100c, &var_1008, ecx_70)
                                                        
                                                        if (edi_3 != 0)
                                                            edi_3 = 1
                                                        else
                                                            *(edi_2 * 0x1d4 + 0x1090b8c) = var_1008
                                                            *(edi_2 * 0x1d4 + 0x1090b90) = var_1004
                                                            *(edi_2 * 0x1d4 + 0x1090b94) = var_1000
                                                            *(edi_2 * 0x1d4 + 0x1090b98) = var_ffc
                                                            *(edi_2 * 0x1d4 + 0x1090b9c) = var_ff8
                                                else
                                                    int32_t* var_14_70 = &var_1010
                                                    edi_3 = sub_4d1280(&var_1008, edx_44, var_100c, 
                                                        &var_1008, ecx_67)
                                                    
                                                    if (edi_3 != 0)
                                                        edi_3 = 1
                                                    else
                                                        *(edi_2 * 0x1d4 + 0x1090b78) = var_1008
                                                        *(edi_2 * 0x1d4 + 0x1090b7c) = var_1004
                                                        *(edi_2 * 0x1d4 + 0x1090b80) = var_1000
                                                        *(edi_2 * 0x1d4 + 0x1090b84) = var_ffc
                                            else
                                                int32_t eax_123 =
                                                    sub_434540(eax_122.b, edx_40, ecx_61, "SETNO=")
                                                char* ecx_62 = var_100c
                                                char** edx_41 = &var_100c
                                                
                                                if (eax_123 != 0)
                                                    int32_t eax_126 =
                                                        sub_434540(eax_123.b, edx_41, ecx_62, "NO=")
                                                    char* ecx_64 = var_100c
                                                    char** edx_42 = &var_100c
                                                    
                                                    if (eax_126 != 0)
                                                        if (sub_434540(eax_126.b, edx_42, ecx_64, 
                                                                "MOD=") != 0)
                                                            edi_3 = 1
                                                        else
                                                            edi_3 = sub_4d11d0(&var_1008, 
                                                                &var_100c, var_100c, &var_1008)
                                                            
                                                            if (edi_3 != 0)
                                                                edi_3 = 1
                                                            else
                                                                *(edi_2 * 0x1d4 + 0x1090b74) = var_1008
                                                    else
                                                        edi_3 = sub_4d11d0(&var_1008, edx_42, 
                                                            ecx_64, &var_1008)
                                                        
                                                        if (edi_3 != 0)
                                                            edi_3 = 1
                                                        else
                                                            int32_t* ecx_65 = nullptr
                                                            
                                                            if (var_1008 s< 8)
                                                                ecx_65 = var_1008
                                                            
                                                            *(edi_2 * 0x1d4 + 0x1090b70) = ecx_65
                                                else
                                                    edi_3 = sub_4d11d0(&var_1008, edx_41, ecx_62, 
                                                        &var_1008)
                                                    
                                                    if (edi_3 != 0)
                                                        edi_3 = 1
                                                    else
                                                        int32_t* ecx_63 = 0xffffffff
                                                        
                                                        if (var_1008 u<= 0x3f)
                                                            ecx_63 = var_1008
                                                        
                                                        *(edi_2 * 0x1d4 + &data_1090b6c) = ecx_63
                                        else
                                            int32_t eax_114 =
                                                sub_434540(eax_113.b, edx_37, ecx_58, "MOD=")
                                            char* ecx_59 = var_100c
                                            char** edx_38 = &var_100c
                                            
                                            if (eax_114 != 0)
                                                if (sub_434540(eax_114.b, edx_38, ecx_59, "TIME=")
                                                        != 0)
                                                    edi_3 = 1
                                                else
                                                    edi_3 = sub_4d11d0(&var_1008, &var_100c, 
                                                        var_100c, &var_1008)
                                                    
                                                    if (edi_3 != 0)
                                                        edi_3 = 1
                                                    else
                                                        int32_t* eax_121 = var_1008
                                                        
                                                        if (eax_121 s< 0 || eax_121 s> 0x2710)
                                                            eax_121 = 0x1f4
                                                        
                                                        *(edi_2 * 0x1d4 + &data_1090b68) = eax_121
                                            else
                                                edi_3 =
                                                    sub_4d11d0(&var_1008, edx_38, ecx_59, &var_1008)
                                                
                                                if (edi_3 != 0)
                                                    edi_3 = 1
                                                else
                                                    *(edi_2 * 0x1d4 + 0x1090b64) = var_1008
                                    else
                                        int32_t eax_105 =
                                            sub_434540(eax_104.b, edx_34, ecx_55, "MOD=")
                                        char* ecx_56 = var_100c
                                        char** edx_35 = &var_100c
                                        
                                        if (eax_105 != 0)
                                            if (sub_434540(eax_105.b, edx_35, ecx_56, "TIME=") != 0)
                                                edi_3 = 1
                                            else
                                                edi_3 = sub_4d11d0(&var_1008, &var_100c, var_100c, 
                                                    &var_1008)
                                                
                                                if (edi_3 != 0)
                                                    edi_3 = 1
                                                else
                                                    int32_t* eax_112 = var_1008
                                                    
                                                    if (eax_112 s< 0 || eax_112 s> 0x2710)
                                                        eax_112 = 0x1f4
                                                    
                                                    *(edi_2 * 0x1d4 + &data_1090b60) = eax_112
                                        else
                                            edi_3 = sub_4d11d0(&var_1008, edx_35, ecx_56, &var_1008)
                                            
                                            if (edi_3 != 0)
                                                edi_3 = 1
                                            else
                                                *(edi_2 * 0x1d4 + 0x1090b5c) = var_1008
                                else
                                    enum MESSAGEBOX_STYLE uType =
                                        sub_434540(eax_103.b, edx_32, ecx_53, "MOD=")
                                    
                                    if (uType != MB_OK)
                                        enum MESSAGEBOX_STYLE uType_1 =
                                            sub_434540(uType.b, &var_100c, var_100c, "TIME=")
                                        
                                        if (uType_1 != MB_OK || arg3 == 0)
                                            edi_3 = 1
                                        else
                                            MessageBoxA(arg3, "Gameexe.ini ", 0x614efc, uType_1)
                                            edi_3 = 1
                                    else if (arg3 == 0)
                                        edi_3 = 1
                                    else
                                        MessageBoxA(arg3, "Gameexe.ini ", 0x614efc, uType)
                                        edi_3 = 1
                            else if (sub_434540(eax_90.b, edx_28, ecx_45, "MOD=") != 0)
                                edi_3 = 1
                            else if (sub_4d11d0(&var_1008, &var_100c, var_100c, &var_1008) != 0)
                                edi_3 = 1
                            else
                                int32_t* eax_94 = var_1008
                                char* ecx_47 = var_100c
                                char* var_14_46 = &data_6149a4
                                *(edi_2 * 0x1d4 + 0x1090b1c) = eax_94
                                int32_t eax_95
                                int32_t* ecx_48
                                eax_95, ecx_48 = sub_434540(eax_94.b, &var_100c, ecx_47, var_14_46)
                                
                                if (eax_95 == 0)
                                    int32_t* var_14_47 = &var_1010
                                    edi_3 = sub_4d1280(&var_1008, &var_100c, var_100c, &var_1008, 
                                        ecx_48)
                                    
                                    if (edi_3 != 0)
                                        edi_3 = 1
                                    else
                                        *(edi_2 * 0x1d4 + 0x1090b20) = var_1008
                                        *(edi_2 * 0x1d4 + 0x1090b24) = var_1004
                                else if (data_702fc0 == 0 || arg3 == 0)
                                    edi_3 = 1
                                else
                                    MessageBoxA(arg3, "Gameexe.ini ", 0x614efc, MB_OK)
                                    edi_3 = 1
                        else
                            int32_t eax_66 = sub_434540(eax_65.b, edx_20, ecx_27, "SIZE=")
                            char* ecx_28 = var_100c
                            char** edx_21 = &var_100c
                            
                            if (eax_66 != 0)
                                int32_t eax_70
                                int32_t* ecx_29
                                eax_70, ecx_29 = sub_434540(eax_66.b, edx_21, ecx_28, "REP=")
                                char** edx_22 = &var_100c
                                
                                if (eax_70 != 0)
                                    int32_t eax_75
                                    int32_t* ecx_32
                                    eax_75, ecx_32 = sub_434540(eax_70.b, edx_22, var_100c, "CNT=")
                                    char** edx_23 = &var_100c
                                    
                                    if (eax_75 != 0)
                                        int32_t eax_79
                                        int32_t* ecx_36
                                        eax_79, ecx_36 =
                                            sub_434540(eax_75.b, edx_23, var_100c, "MIN=")
                                        char** edx_24 = &var_100c
                                        
                                        if (eax_79 != 0)
                                            int32_t eax_83
                                            int32_t* ecx_40
                                            eax_83, ecx_40 =
                                                sub_434540(eax_79.b, edx_24, var_100c, "POS=")
                                            char** edx_25 = &var_100c
                                            
                                            if (eax_83 != 0)
                                                if (sub_434540(eax_83.b, edx_25, var_100c, 
                                                        "SHADOW=") != 0)
                                                    edi_3 = 1
                                                else
                                                    void* eax_89 = sub_4d11d0(&var_1008, &var_100c, 
                                                        var_100c, &var_1008)
                                                    edi_3 = eax_89
                                                    
                                                    if (edi_3 != 0)
                                                        edi_3 = 1
                                                    else
                                                        eax_89.b = var_1008 != eax_89
                                                        *(edi_2 * 0x1d4 + 0x1090c08) = eax_89
                                            else
                                                int32_t* var_14_40 = &var_1010
                                                void* eax_85 = sub_4d1280(&var_1008, edx_25, 
                                                    var_100c, &var_1008, ecx_40)
                                                edi_3 = eax_85
                                                
                                                if (edi_3 != 0)
                                                    edi_3 = 1
                                                else
                                                    int32_t* esi_1 = var_1008
                                                    void* edx_26 = var_1004
                                                    void* ecx_42 = var_1000
                                                    
                                                    if (esi_1 s< 0)
                                                        esi_1 = eax_85
                                                    
                                                    var_1014 = edi_3
                                                    *(edi_2 * 0x1d4 + 0x1090b04) = esi_1
                                                    
                                                    if (edx_26 s< 0)
                                                        edx_26 = eax_85
                                                    
                                                    *(edi_2 * 0x1d4 + 0x1090b08) = edx_26
                                                    
                                                    if (ecx_42 s< 0)
                                                        ecx_42 = eax_85
                                                    
                                                    void* eax_86 = var_ffc
                                                    *(edi_2 * 0x1d4 + 0x1090b0c) = ecx_42
                                                    
                                                    if (eax_86 s< 0)
                                                        eax_86 = edi_3
                                                    
                                                    *(edi_2 * 0x1d4 + 0x1090b10) = eax_86
                                        else
                                            int32_t* var_14_38 = &var_1010
                                            edi_3 = sub_4d1280(&var_1008, edx_24, var_100c, 
                                                &var_1008, ecx_36)
                                            
                                            if (edi_3 != 0)
                                                edi_3 = 1
                                            else
                                                int32_t* ecx_38 = var_1008
                                                void* eax_82 = var_1004
                                                
                                                if (ecx_38 s< 1)
                                                    ecx_38 = 1
                                                
                                                *(edi_2 * 0x1d4 + 0x1090afc) = ecx_38
                                                
                                                if (eax_82 s< 1)
                                                    eax_82 = 1
                                                
                                                *(edi_2 * 0x1d4 + 0x1090b00) = eax_82
                                    else
                                        int32_t* var_14_36 = &var_1010
                                        edi_3 = sub_4d1280(&var_1008, edx_23, var_100c, &var_1008, 
                                            ecx_32)
                                        
                                        if (edi_3 != 0)
                                            edi_3 = 1
                                        else
                                            int32_t* ecx_34 = var_1008
                                            void* eax_78 = var_1004
                                            
                                            if (ecx_34 s< 1)
                                                ecx_34 = 1
                                            
                                            *(edi_2 * 0x1d4 + 0x1090af4) = ecx_34
                                            
                                            if (eax_78 s< 1)
                                                eax_78 = 1
                                            
                                            *(edi_2 * 0x1d4 + 0x1090af8) = eax_78
                                else
                                    int32_t* var_14_34 = &var_1010
                                    edi_3 =
                                        sub_4d1280(&var_1008, edx_22, var_100c, &var_1008, ecx_29)
                                    
                                    if (edi_3 != 0)
                                        edi_3 = 1
                                    else
                                        *(edi_2 * 0x1d4 + &data_1090aec) = var_1008
                                        *(edi_2 * 0x1d4 + 0x1090af0) = var_1004
                            else
                                edi_3 = sub_4d11d0(&var_1008, edx_21, ecx_28, &var_1008)
                                
                                if (edi_3 != 0)
                                    edi_3 = 1
                                else
                                    *(edi_2 * 0x1d4 + 0x1090ae8) = var_1008
                    else if (sub_434540(eax_60.b, edx_18, ecx_25, "SIZE=") != 0)
                        edi_3 = 1
                    else
                        edi_3 = sub_4d11d0(&var_1008, &var_100c, var_100c, &var_1008)
                        
                        if (edi_3 != 0)
                            edi_3 = 1
                        else
                            int32_t* eax_64 = var_1008
                            
                            if (eax_64 s> 0)
                                if (eax_64 s<= 8)
                                    eax_64 = 8
                                
                                *(edi_2 * 0x1d4 + 0x1090c00) = eax_64
                            else
                                *(edi_2 * 0x1d4 + 0x1090c00) = 0
                else
                    int32_t eax_20 = sub_434540(eax_19.b, edx_7, ecx_8, "MOD=")
                    char* ecx_9 = var_100c
                    char** edx_8 = &var_100c
                    
                    if (eax_20 != 0)
                        int32_t eax_24 = sub_434540(eax_20.b, edx_8, ecx_9, "RETURN=")
                        char* ecx_10 = var_100c
                        char** edx_9 = &var_100c
                        
                        if (eax_24 != 0)
                            int32_t eax_28 = sub_434540(eax_24.b, edx_9, ecx_10, "CENTERING=")
                            char* ecx_11 = var_100c
                            char** edx_10 = &var_100c
                            
                            if (eax_28 != 0)
                                int32_t eax_32
                                int32_t* ecx_12
                                eax_32, ecx_12 = sub_434540(eax_28.b, edx_10, ecx_11, "POS=")
                                char** edx_11 = &var_100c
                                
                                if (eax_32 != 0)
                                    int32_t eax_37 =
                                        sub_434540(eax_32.b, edx_11, var_100c, "MOJI_SIZE=")
                                    char* ecx_15 = var_100c
                                    char** edx_12 = &var_100c
                                    
                                    if (eax_37 != 0)
                                        int32_t eax_41 =
                                            sub_434540(eax_37.b, edx_12, ecx_15, "MOJI_REP=")
                                        char* ecx_16 = var_100c
                                        char** edx_13 = &var_100c
                                        
                                        if (eax_41 != 0)
                                            int32_t eax_45
                                            int32_t* ecx_17
                                            eax_45, ecx_17 =
                                                sub_434540(eax_41.b, edx_13, ecx_16, "MOJI_POS=")
                                            char** edx_14 = &var_100c
                                            
                                            if (eax_45 != 0)
                                                int32_t eax_49 = sub_434540(eax_45.b, edx_14, 
                                                    var_100c, "MOJI_MIN=")
                                                char* ecx_21 = var_100c
                                                char** edx_15 = &var_100c
                                                
                                                if (eax_49 != 0)
                                                    int32_t eax_53 = sub_434540(eax_49.b, edx_15, 
                                                        ecx_21, "WAKU_DIR=")
                                                    char* ecx_22 = var_100c
                                                    char** edx_16 = &var_100c
                                                    
                                                    if (eax_53 != 0)
                                                        if (sub_434540(eax_53.b, edx_16, ecx_22, 
                                                                "WAKU_SETNO=") != 0)
                                                            edi_3 = 1
                                                        else
                                                            edi_3 = sub_4d11d0(&var_1008, 
                                                                &var_100c, var_100c, &var_1008)
                                                            
                                                            if (edi_3 != 0)
                                                                edi_3 = 1
                                                            else
                                                                int32_t* ecx_24 = 0xffffffff
                                                                
                                                                if (var_1008 u<= 0x3f)
                                                                    ecx_24 = var_1008
                                                                
                                                                *(edi_2 * 0x1d4 + &data_1090b58) =
                                                                    ecx_24
                                                    else
                                                        edi_3 = sub_4d11d0(&var_1008, edx_16, 
                                                            ecx_22, &var_1008)
                                                        
                                                        if (edi_3 != 0)
                                                            edi_3 = 1
                                                        else
                                                            *(edi_2 * 0x1d4 + 0x1090b54) = var_1008
                                                else
                                                    edi_3 = sub_4d11d0(&var_1008, edx_15, ecx_21, 
                                                        &var_1008)
                                                    
                                                    if (edi_3 != 0)
                                                        edi_3 = 1
                                                    else
                                                        int32_t* eax_52 = var_1008
                                                        
                                                        if (eax_52 s< 1)
                                                            eax_52 = 1
                                                        
                                                        *(edi_2 * 0x1d4 + 0x1090b48) = eax_52
                                            else
                                                int32_t* var_14_20 = &var_1010
                                                void* eax_47 = sub_4d1280(&var_1008, edx_14, 
                                                    var_100c, &var_1008, ecx_17)
                                                edi_3 = eax_47
                                                
                                                if (edi_3 != 0)
                                                    edi_3 = 1
                                                else
                                                    void* ecx_19 = var_1008
                                                    
                                                    if (ecx_19 s< 0)
                                                        ecx_19 = eax_47
                                                    
                                                    void* eax_48 = var_1004
                                                    *(edi_2 * 0x1d4 + 0x1090b4c) = ecx_19
                                                    
                                                    if (eax_48 s< 0)
                                                        eax_48 = nullptr
                                                    
                                                    *(edi_2 * 0x1d4 + 0x1090b50) = eax_48
                                        else
                                            edi_3 = sub_4d11d0(&var_1008, edx_13, ecx_16, &var_1008)
                                            
                                            if (edi_3 != 0)
                                                edi_3 = 1
                                            else
                                                *(edi_2 * 0x1d4 + 0x1090b44) = var_1008
                                    else
                                        edi_3 = sub_4d11d0(&var_1008, edx_12, ecx_15, &var_1008)
                                        
                                        if (edi_3 != 0)
                                            edi_3 = 1
                                        else
                                            *(edi_2 * 0x1d4 + 0x1090b40) = var_1008
                                else
                                    int32_t* var_14_14 = &var_1010
                                    edi_3 =
                                        sub_4d1280(&var_1008, edx_11, var_100c, &var_1008, ecx_12)
                                    
                                    if (edi_3 != 0)
                                        edi_3 = 1
                                    else
                                        *(edi_2 * 0x1d4 + 0x1090b38) = var_1008
                                        *(edi_2 * 0x1d4 + 0x1090b3c) = var_1004
                            else
                                edi_3 = sub_4d11d0(&var_1008, edx_10, ecx_11, &var_1008)
                                
                                if (edi_3 != 0)
                                    edi_3 = 1
                                else
                                    *(edi_2 * 0x1d4 + 0x1090b34) = var_1008
                        else
                            edi_3 = sub_4d11d0(&var_1008, edx_9, ecx_10, &var_1008)
                            
                            if (edi_3 != 0)
                                edi_3 = 1
                            else
                                *(edi_2 * 0x1d4 + 0x1090b30) = var_1008
                    else
                        edi_3 = sub_4d11d0(&var_1008, edx_8, ecx_9, &var_1008)
                        
                        if (edi_3 != 0)
                            edi_3 = 1
                        else
                            *(edi_2 * 0x1d4 + &data_1090b2c) = var_1008
            else
                int32_t eax_9 = sub_4d11d0(&var_1014, edx_4, ecx_4, &var_1014)
                
                if (eax_9 != 0)
                    edi_3 = 1
                else
                    int32_t eax_10
                    int32_t* ecx_6
                    eax_10, ecx_6 = sub_434540(eax_9.b, &var_100c, var_100c, ":")
                    
                    if (eax_10 != 0)
                        edi_3 = 1
                    else
                        int32_t* var_14_5 = &var_1010
                        edi_3 = sub_4d1280(&var_1008, &var_100c, var_100c, &var_1008, ecx_6)
                        
                        if (edi_3 != 0)
                            edi_3 = 1
                        else
                            void* eax_13 = var_1014
                            void* eax_14 = eax_13 - edi_3
                            
                            if (eax_13 == edi_3)
                                *(edi_2 * 0x1d4 + 0x1090bac) = 0
                                *(edi_2 * 0x1d4 + 0x1090ba8) = 0
                            else if (eax_14 == 1)
                                *(edi_2 * 0x1d4 + 0x1090ba8) = 1
                                *(edi_2 * 0x1d4 + 0x1090bac) = 0
                            else
                                *(edi_2 * 0x1d4 + 0x1090bac) = 1
                                
                                if (eax_14 == 2)
                                    *(edi_2 * 0x1d4 + 0x1090ba8) = 0
                                else
                                    *(edi_2 * 0x1d4 + 0x1090ba8) = 1
                            
                            *(edi_2 * 0x1d4 + 0x1090ba0) = var_1008
                            *(edi_2 * 0x1d4 + 0x1090ba4) = var_1004

*arg2 = edi_3
*edx = var_100c
sub_5f02dd(arg1 ^ &__saved_ebp)
return 0
