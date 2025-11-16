// 函数: sub_43c9f0
// 地址: 0x43c9f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x1014)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp

if (sub_4d0fe0(arg2.b, "#WAKU.", ecx, 6) != 0)
    sub_5f02dd(arg1 ^ &__saved_ebp)
    return 1

int32_t var_1010
int32_t* var_14 = &var_1010
char* var_100c = &ecx[6]
int32_t eax_5 = sub_4d11d0(&var_1010, &var_100c, &ecx[6], var_14)
void* esi_2

if (eax_5 != 0)
    esi_2 = 1
else
    int32_t edi_1 = var_1010
    
    if (edi_1 u> 0x40)
        esi_2 = 1
    else
        int32_t eax_6 = sub_434540(eax_5.b, &var_100c, var_100c, ".")
        
        if (eax_6 != 0)
            esi_2 = 1
        else
            int32_t eax_7 = sub_434540(eax_6.b, &var_100c, var_100c, "TYPE=")
            char* ecx_4 = var_100c
            char** edx_4 = &var_100c
            int32_t* var_1008
            
            if (eax_7 != 0)
                void* eax_11 = sub_4d11d0(&var_1010, edx_4, ecx_4, &var_1010)
                esi_2 = eax_11
                
                if (esi_2 != 0)
                    esi_2 = 1
                else
                    int32_t ebx_1 = var_1010
                    
                    if (ebx_1 u> 7)
                        esi_2 = 1
                    else if (sub_434540(eax_11.b, &var_100c, var_100c, ".") != 0)
                        esi_2 = 1
                    else
                        int32_t eax_13 = ebx_1 + (edi_1 << 3)
                        int32_t eax_14
                        int32_t ecx_7
                        eax_14, ecx_7 = sub_434540(eax_13.b, &var_100c, var_100c, "NAME="")
                        char** edx_8 = &var_100c
                        
                        if (eax_14 != 0)
                            int32_t eax_17
                            int32_t ecx_11
                            eax_17, ecx_11 = sub_434540(eax_14.b, edx_8, var_100c, "BACK="")
                            char** edx_10 = &var_100c
                            
                            if (eax_17 != 0)
                                int32_t eax_20
                                int32_t ecx_15
                                eax_20, ecx_15 = sub_434540(eax_17.b, edx_10, var_100c, "BTN="")
                                char** edx_12 = &var_100c
                                
                                if (eax_20 != 0)
                                    int32_t eax_23
                                    int32_t* ecx_19
                                    eax_23, ecx_19 = sub_434540(eax_20.b, edx_12, var_100c, "AREA=")
                                    char** edx_14 = &var_100c
                                    int32_t var_1004
                                    
                                    if (eax_23 != 0)
                                        int32_t eax_30
                                        int32_t* ecx_22
                                        eax_30, ecx_22 =
                                            sub_434540(eax_23.b, edx_14, var_100c, "REP_MOJI_POS=")
                                        char** edx_15 = &var_100c
                                        
                                        if (eax_30 != 0)
                                            int32_t eax_35
                                            int32_t ecx_25
                                            eax_35, ecx_25 =
                                                sub_434540(eax_30.b, edx_15, var_100c, "MOVE_BTN="")
                                            char** edx_16 = &var_100c
                                            
                                            if (eax_35 != 0)
                                                int32_t eax_38
                                                int32_t ecx_29
                                                eax_38, ecx_29 = sub_434540(eax_35.b, edx_16, 
                                                    var_100c, "CLEAR_BTN="")
                                                char** edx_18 = &var_100c
                                                
                                                if (eax_38 != 0)
                                                    int32_t eax_41
                                                    int32_t ecx_33
                                                    eax_41, ecx_33 = sub_434540(eax_38.b, edx_18, 
                                                        var_100c, "READJUMP_OFF_BTN="")
                                                    char** edx_20 = &var_100c
                                                    
                                                    if (eax_41 != 0)
                                                        int32_t eax_44
                                                        int32_t ecx_37
                                                        eax_44, ecx_37 = sub_434540(eax_41.b, 
                                                            edx_20, var_100c, "READJUMP_ON_BTN="")
                                                        char** edx_22 = &var_100c
                                                        
                                                        if (eax_44 != 0)
                                                            int32_t eax_47
                                                            int32_t ecx_41
                                                            eax_47, ecx_41 = sub_434540(eax_44.b, 
                                                                edx_22, var_100c, "AUTOMODE_OFF_BTN="")
                                                            char** edx_24 = &var_100c
                                                            
                                                            if (eax_47 != 0)
                                                                int32_t eax_50
                                                                int32_t ecx_45
                                                                eax_50, ecx_45 = sub_434540(eax_47.b, 
                                                                    edx_24, var_100c, "AUTOMODE_ON_BTN="")
                                                                char** edx_26 = &var_100c
                                                                
                                                                if (eax_50 != 0)
                                                                    int32_t eax_53
                                                                    int32_t ecx_49
                                                                    eax_53, ecx_49 = sub_434540(eax_50.b, 
                                                                        edx_26, var_100c, "KOEPLAY_BTN="")
                                                                    char** edx_28 = &var_100c
                                                                    
                                                                    if (eax_53 != 0)
                                                                        int32_t eax_56
                                                                        int32_t ecx_53
                                                                        eax_56, ecx_53 = sub_434540(eax_53.b, 
                                                                            edx_28, var_100c, "MSGBK_BTN="")
                                                                        char** edx_30 = &var_100c
                                                                        
                                                                        if (eax_56 != 0)
                                                                            int32_t eax_59
                                                                            int32_t ecx_57
                                                                            eax_59, ecx_57 = sub_434540(eax_56.b, 
                                                                                edx_30, var_100c, "MSGBKLEFT_BTN="")
                                                                            char** edx_32 = &var_100c
                                                                            
                                                                            if (eax_59 != 0)
                                                                                int32_t eax_62
                                                                                int32_t ecx_61
                                                                                eax_62, ecx_61 = sub_434540(eax_59.b, 
                                                                                    edx_32, var_100c, "MSGBKRIGHT_BTN="")
                                                                                char** edx_34 = &var_100c
                                                                                
                                                                                if (eax_62 != 0)
                                                                                    int32_t eax_65 = sub_434540(eax_62.b, 
                                                                                        edx_34, var_100c, "MOVE_BOX=")
                                                                                    
                                                                                    if (eax_65 != 0)
                                                                                        int32_t eax_68 = sub_434540(eax_65.b, 
                                                                                            &var_100c, var_100c, "CLEAR_BOX=")
                                                                                        
                                                                                        if (eax_68 != 0)
                                                                                            int32_t eax_71 = sub_434540(eax_68.b, 
                                                                                                &var_100c, var_100c, "READJUMP_BOX=")
                                                                                            
                                                                                            if (eax_71 != 0)
                                                                                                int32_t eax_74 = sub_434540(eax_71.b, 
                                                                                                    &var_100c, var_100c, "AUTOMODE_BOX=")
                                                                                                
                                                                                                if (eax_74 != 0)
                                                                                                    int32_t eax_77 = sub_434540(eax_74.b, 
                                                                                                        &var_100c, var_100c, "KOEPLAY_BOX=")
                                                                                                    
                                                                                                    if (eax_77 != 0)
                                                                                                        int32_t eax_80 = sub_434540(eax_77.b, 
                                                                                                            &var_100c, var_100c, "MSGBK_BOX=")
                                                                                                        
                                                                                                        if (eax_80 != 0)
                                                                                                            int32_t eax_83 = sub_434540(eax_80.b, 
                                                                                                                &var_100c, var_100c, "MSGBKLEFT_BOX=")
                                                                                                            
                                                                                                            if (eax_83 != 0)
                                                                                                                int32_t eax_86 = sub_434540(eax_83.b, 
                                                                                                                    &var_100c, var_100c, "MSGBKRIGHT_BOX=")
                                                                                                                
                                                                                                                if (eax_86 != 0)
                                                                                                                    int32_t eax_89 = sub_434540(eax_86.b, 
                                                                                                                        &var_100c, var_100c, "MOVE_POS=")
                                                                                                                    
                                                                                                                    if (eax_89 != 0)
                                                                                                                        int32_t eax_92 = sub_434540(eax_89.b, 
                                                                                                                            &var_100c, var_100c, "CLEAR_POS=")
                                                                                                                        
                                                                                                                        if (eax_92 != 0)
                                                                                                                            int32_t eax_95 = sub_434540(eax_92.b, 
                                                                                                                                &var_100c, var_100c, "READJUMP_POS=")
                                                                                                                            
                                                                                                                            if (eax_95 != 0)
                                                                                                                                int32_t eax_98 = sub_434540(eax_95.b, 
                                                                                                                                    &var_100c, var_100c, "AUTOMODE_POS=")
                                                                                                                                
                                                                                                                                if (eax_98 != 0)
                                                                                                                                    int32_t eax_101 = sub_434540(eax_98.b, 
                                                                                                                                        &var_100c, var_100c, "KOEPLAY_POS=")
                                                                                                                                    
                                                                                                                                    if (eax_101 != 0)
                                                                                                                                        int32_t eax_104 = sub_434540(eax_101.b, 
                                                                                                                                            &var_100c, var_100c, "MSGBK_POS=")
                                                                                                                                        
                                                                                                                                        if (eax_104 != 0)
                                                                                                                                            int32_t eax_107 = sub_434540(eax_104.b, 
                                                                                                                                                &var_100c, var_100c, "MSGBKLEFT_POS=")
                                                                                                                                            
                                                                                                                                            if (eax_107 != 0)
                                                                                                                                                int32_t eax_110 = sub_434540(eax_107.b, 
                                                                                                                                                    &var_100c, var_100c, "MSGBKRIGHT_POS=")
                                                                                                                                                
                                                                                                                                                if (eax_110 != 0)
                                                                                                                                                    int32_t eax_113 = sub_434540(eax_110.b, 
                                                                                                                                                        &var_100c, var_100c, "EXBTN_")
                                                                                                                                                    char* ecx_97 = var_100c
                                                                                                                                                    char** edx_68 = &var_100c
                                                                                                                                                    
                                                                                                                                                    if (eax_113 != 0)
                                                                                                                                                        if (sub_434540(eax_113.b, edx_68, 
                                                                                                                                                                ecx_97, "KOEREPLAYICON_POS=") != 0)
                                                                                                                                                            esi_2 = 1
                                                                                                                                                        else if (sub_4d11d0(&var_1008, 
                                                                                                                                                                &var_100c, var_100c, &var_1008) != 0)
                                                                                                                                                            esi_2 = 1
                                                                                                                                                        else
                                                                                                                                                            int32_t* eax_137 = var_1008
                                                                                                                                                            char* ecx_108 = var_100c
                                                                                                                                                            char* var_14_94 = &data_6149a4
                                                                                                                                                            *(eax_13 * 0xff8 + 0x109b7d0) = eax_137
                                                                                                                                                            int32_t eax_138
                                                                                                                                                            int32_t* ecx_109
                                                                                                                                                            eax_138, ecx_109 = sub_434540(
                                                                                                                                                                eax_137.b, &var_100c, ecx_108, 
                                                                                                                                                                var_14_94)
                                                                                                                                                            
                                                                                                                                                            if (eax_138 != 0)
                                                                                                                                                                esi_2 = 1
                                                                                                                                                            else
                                                                                                                                                                int32_t* var_14_95 = &var_1010
                                                                                                                                                                esi_2 = sub_4d1280(&var_1008, 
                                                                                                                                                                    &var_100c, var_100c, &var_1008, ecx_109)
                                                                                                                                                                
                                                                                                                                                                if (esi_2 != 0)
                                                                                                                                                                    esi_2 = 1
                                                                                                                                                                else
                                                                                                                                                                    *(eax_13 * 0xff8 + 0x109b7d4) = var_1008
                                                                                                                                                                    *(eax_13 * 0xff8 + 0x109b7d8) = var_1004
                                                                                                                                                    else
                                                                                                                                                        int32_t eax_115 = sub_4d11d0(&var_1010, 
                                                                                                                                                            edx_68, ecx_97, &var_1010)
                                                                                                                                                        
                                                                                                                                                        if (eax_115 != 0)
                                                                                                                                                            esi_2 = 1
                                                                                                                                                        else
                                                                                                                                                            int32_t ebx_2 = var_1010
                                                                                                                                                            
                                                                                                                                                            if (ebx_2 u> 7)
                                                                                                                                                                esi_2 = 1
                                                                                                                                                            else
                                                                                                                                                                int32_t eax_116 = sub_434540(eax_115.b, 
                                                                                                                                                                    &var_100c, var_100c, "_BTN.")
                                                                                                                                                                char* ecx_99 = var_100c
                                                                                                                                                                char** edx_70 = &var_100c
                                                                                                                                                                
                                                                                                                                                                if (eax_116 != 0)
                                                                                                                                                                    int32_t eax_126 = sub_434540(eax_116.b, 
                                                                                                                                                                        edx_70, ecx_99, "_BOX=")
                                                                                                                                                                    
                                                                                                                                                                    if (eax_126 != 0)
                                                                                                                                                                        if (sub_434540(eax_126.b, &var_100c, 
                                                                                                                                                                                var_100c, "_POS=") != 0)
                                                                                                                                                                            esi_2 = 1
                                                                                                                                                                        else
                                                                                                                                                                            int32_t eax_132 =
                                                                                                                                                                                ebx_2 + ((ebx_2 + 0x36) << 2)
                                                                                                                                                                            esi_2 = sub_436c10(eax_132, var_100c, 
                                                                                                                                                                                eax_13 * 0xff8 +
                                                                                                                                                                                    &data_109a7e4 + (eax_132 << 2), 
                                                                                                                                                                                &var_100c)
                                                                                                                                                                    else
                                                                                                                                                                        int32_t eax_128 =
                                                                                                                                                                            ebx_2 + ((ebx_2 + 0xe) << 2)
                                                                                                                                                                        esi_2 = sub_436b40(eax_128, var_100c, 
                                                                                                                                                                            eax_13 * 0xff8 +
                                                                                                                                                                                &data_109a7e4 + (eax_128 << 2), 
                                                                                                                                                                            &var_100c)
                                                                                                                                                                else
                                                                                                                                                                    void* eax_118 = sub_4d11d0(&var_1010, 
                                                                                                                                                                        edx_70, ecx_99, &var_1010)
                                                                                                                                                                    esi_2 = eax_118
                                                                                                                                                                    
                                                                                                                                                                    if (esi_2 != 0 || var_1010 u> 7)
                                                                                                                                                                        esi_2 = 1
                                                                                                                                                                    else
                                                                                                                                                                        int32_t eax_119
                                                                                                                                                                        int32_t ecx_101
                                                                                                                                                                        eax_119, ecx_101 = sub_434540(
                                                                                                                                                                            eax_118.b, &var_100c, var_100c, "="")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_119 != 0)
                                                                                                                                                                            esi_2 = 1
                                                                                                                                                                        else
                                                                                                                                                                            int32_t var_14_86 = ecx_101
                                                                                                                                                                            
                                                                                                                                                                            if (sub_4d1140(&var_1008, &var_100c, 
                                                                                                                                                                                    var_100c, &var_1008, 0x1000) != 0)
                                                                                                                                                                                esi_2 = 1
                                                                                                                                                                            else
                                                                                                                                                                                int32_t eax_125 =
                                                                                                                                                                                    (var_1010 + (ebx_2 << 3) + 0x31) * 9
                                                                                                                                                                                sub_4cfdf0(eax_125, &var_1008, 
                                                                                                                                                                                    eax_13 * 0xff8 +
                                                                                                                                                                                        &data_109a7e4 + (eax_125 << 2), 
                                                                                                                                                                                    0x24)
                                                                                                                                                else
                                                                                                                                                    esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                                        eax_13 * 0xff8 + 0x109ab30, &var_100c)
                                                                                                                                            else
                                                                                                                                                esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                                    eax_13 * 0xff8 + 0x109ab1c, &var_100c)
                                                                                                                                        else
                                                                                                                                            esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                                eax_13 * 0xff8 + 0x109ab08, &var_100c)
                                                                                                                                    else
                                                                                                                                        esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                            eax_13 * 0xff8 + 0x109ac0c, &var_100c)
                                                                                                                                else
                                                                                                                                    esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                        eax_13 * 0xff8 + 0x109abf8, &var_100c)
                                                                                                                            else
                                                                                                                                esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                    eax_13 * 0xff8 + 0x109abe4, &var_100c)
                                                                                                                        else
                                                                                                                            esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                                eax_13 * 0xff8 + 0x109aaf4, &var_100c)
                                                                                                                    else
                                                                                                                        esi_2 = sub_436c10(&var_100c, var_100c, 
                                                                                                                            eax_13 * 0xff8 + 0x109aae0, &var_100c)
                                                                                                                else
                                                                                                                    esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                                        eax_13 * 0xff8 + 0x109a8b0, &var_100c)
                                                                                                            else
                                                                                                                esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                                    eax_13 * 0xff8 + 0x109a89c, &var_100c)
                                                                                                        else
                                                                                                            esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                                eax_13 * 0xff8 + 0x109a888, &var_100c)
                                                                                                    else
                                                                                                        esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                            eax_13 * 0xff8 + 0x109a98c, &var_100c)
                                                                                                else
                                                                                                    esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                        eax_13 * 0xff8 + 0x109a978, &var_100c)
                                                                                            else
                                                                                                esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                    eax_13 * 0xff8 + 0x109a964, &var_100c)
                                                                                        else
                                                                                            esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                                eax_13 * 0xff8 + 0x109a874, &var_100c)
                                                                                    else
                                                                                        esi_2 = sub_436b40(&var_100c, var_100c, 
                                                                                            eax_13 * 0xff8 + 0x109a860, &var_100c)
                                                                                else
                                                                                    int32_t var_14_47 = ecx_61
                                                                                    void* eax_64 = sub_4d1140(&var_1008, 
                                                                                        edx_34, var_100c, &var_1008, 0x1000)
                                                                                    
                                                                                    if (eax_64 != 0)
                                                                                        esi_2 = 1
                                                                                    else
                                                                                        sub_4cfdf0(eax_64, &var_1008, 
                                                                                            eax_13 * 0xff8 + 0x109adf0, 0x24)
                                                                            else
                                                                                int32_t var_14_44 = ecx_57
                                                                                void* eax_61 = sub_4d1140(&var_1008, 
                                                                                    edx_32, var_100c, &var_1008, 0x1000)
                                                                                
                                                                                if (eax_61 != 0)
                                                                                    esi_2 = 1
                                                                                else
                                                                                    sub_4cfdf0(eax_61, &var_1008, 
                                                                                        eax_13 * 0xff8 + 0x109adcc, 0x24)
                                                                        else
                                                                            int32_t var_14_41 = ecx_53
                                                                            void* eax_58 = sub_4d1140(&var_1008, 
                                                                                edx_30, var_100c, &var_1008, 0x1000)
                                                                            
                                                                            if (eax_58 != 0)
                                                                                esi_2 = 1
                                                                            else
                                                                                sub_4cfdf0(eax_58, &var_1008, 
                                                                                    eax_13 * 0xff8 + 0x109ada8, 0x24)
                                                                    else
                                                                        int32_t var_14_38 = ecx_49
                                                                        void* eax_55 = sub_4d1140(&var_1008, 
                                                                            edx_28, var_100c, &var_1008, 0x1000)
                                                                        
                                                                        if (eax_55 != 0)
                                                                            esi_2 = 1
                                                                        else
                                                                            sub_4cfdf0(eax_55, &var_1008, 
                                                                                eax_13 * 0xff8 + 0x109aea4, 0x24)
                                                                else
                                                                    int32_t var_14_35 = ecx_45
                                                                    void* eax_52 = sub_4d1140(&var_1008, 
                                                                        edx_26, var_100c, &var_1008, 0x1000)
                                                                    
                                                                    if (eax_52 != 0)
                                                                        esi_2 = 1
                                                                    else
                                                                        sub_4cfdf0(eax_52, &var_1008, 
                                                                            eax_13 * 0xff8 + 0x109ae80, 0x24)
                                                            else
                                                                int32_t var_14_32 = ecx_41
                                                                void* eax_49 = sub_4d1140(&var_1008, 
                                                                    edx_24, var_100c, &var_1008, 0x1000)
                                                                
                                                                if (eax_49 != 0)
                                                                    esi_2 = 1
                                                                else
                                                                    sub_4cfdf0(eax_49, &var_1008, 
                                                                        eax_13 * 0xff8 + 0x109ae5c, 0x24)
                                                        else
                                                            int32_t var_14_29 = ecx_37
                                                            void* eax_46 = sub_4d1140(&var_1008, 
                                                                edx_22, var_100c, &var_1008, 0x1000)
                                                            
                                                            if (eax_46 != 0)
                                                                esi_2 = 1
                                                            else
                                                                sub_4cfdf0(eax_46, &var_1008, 
                                                                    eax_13 * 0xff8 + 0x109ae38, 0x24)
                                                    else
                                                        int32_t var_14_26 = ecx_33
                                                        void* eax_43 = sub_4d1140(&var_1008, 
                                                            edx_20, var_100c, &var_1008, 0x1000)
                                                        
                                                        if (eax_43 != 0)
                                                            esi_2 = 1
                                                        else
                                                            sub_4cfdf0(eax_43, &var_1008, 
                                                                eax_13 * 0xff8 + 0x109ae14, 0x24)
                                                else
                                                    int32_t var_14_23 = ecx_29
                                                    void* eax_40 = sub_4d1140(&var_1008, edx_18, 
                                                        var_100c, &var_1008, 0x1000)
                                                    
                                                    if (eax_40 != 0)
                                                        esi_2 = 1
                                                    else
                                                        sub_4cfdf0(eax_40, &var_1008, 
                                                            eax_13 * 0xff8 + 0x109ad84, 0x24)
                                            else
                                                int32_t var_14_20 = ecx_25
                                                void* eax_37 = sub_4d1140(&var_1008, edx_16, 
                                                    var_100c, &var_1008, 0x1000)
                                                
                                                if (eax_37 != 0)
                                                    esi_2 = 1
                                                else
                                                    sub_4cfdf0(eax_37, &var_1008, 
                                                        eax_13 * 0xff8 + 0x109ad60, 0x24)
                                        else
                                            int32_t* var_14_18 = &var_1010
                                            esi_2 = sub_4d1280(&var_1008, edx_15, var_100c, 
                                                &var_1008, ecx_22)
                                            
                                            if (esi_2 != 0)
                                                esi_2 = 1
                                            else
                                                *(eax_13 * 0xff8 + 0x109b7c8) = var_1008
                                                *(eax_13 * 0xff8 + 0x109b7cc) = var_1004
                                    else
                                        int32_t* var_14_16 = &var_1010
                                        esi_2 = sub_4d1280(&var_1008, edx_14, var_100c, &var_1008, 
                                            ecx_19)
                                        
                                        if (esi_2 != 0)
                                            esi_2 = 1
                                        else
                                            *(eax_13 * 0xff8 + 0x109a858) = var_1008
                                            *(eax_13 * 0xff8 + 0x109a85c) = var_1004
                                            int32_t var_1000
                                            *(eax_13 * 0xff8 + 0x109a850) = var_1000
                                            int32_t var_ffc
                                            *(eax_13 * 0xff8 + 0x109a854) = var_ffc
                                else
                                    int32_t var_14_13 = ecx_15
                                    void* eax_22 =
                                        sub_4d1140(&var_1008, edx_12, var_100c, &var_1008, 0x1000)
                                    
                                    if (eax_22 != 0)
                                        esi_2 = 1
                                    else
                                        sub_4cfdf0(eax_22, &var_1008, eax_13 * 0xff8 + 0x109a82c, 
                                            0x24)
                            else
                                int32_t var_14_10 = ecx_11
                                void* eax_19 =
                                    sub_4d1140(&var_1008, edx_10, var_100c, &var_1008, 0x1000)
                                
                                if (eax_19 != 0)
                                    esi_2 = 1
                                else
                                    sub_4cfdf0(eax_19, &var_1008, eax_13 * 0xff8 + 0x109a808, 0x24)
                        else
                            int32_t var_14_7 = ecx_7
                            void* eax_16 = sub_4d1140(&var_1008, edx_8, var_100c, &var_1008, 0x1000)
                            
                            if (eax_16 != 0)
                                esi_2 = 1
                            else
                                sub_4cfdf0(eax_16, &var_1008, eax_13 * 0xff8 + &data_109a7e4, 0x24)
            else
                esi_2 = sub_4d11d0(&var_1008, edx_4, ecx_4, &var_1008)
                
                if (esi_2 != 0)
                    esi_2 = 1
                else
                    int32_t* edx_5 = nullptr
                    
                    if (var_1008 u<= 5)
                        edx_5 = var_1008
                    
                    *((edi_1 << 2) + &data_12997e4) = edx_5

*arg2 = esi_2
*edx = var_100c
sub_5f02dd(arg1 ^ &__saved_ebp)
return 0
