// 函数: sub_434580
// 地址: 0x434580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x2014)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = 3
char* var_100c = ecx
int32_t eax_3 = sub_4d0fe0(arg1.b, "#A[", ecx, var_14)
int32_t var_2018
int32_t var_1010
int32_t entry_ebx
int32_t ebx

if (eax_3 == 0)
    int32_t* var_14_1 = &var_1010
    var_100c = &ecx[3]
    int32_t eax_5 = sub_4d11d0(&var_1010, &var_100c, &ecx[3], var_14_1)
    
    if (eax_5 != 0)
    label_436af3:
        ebx = 1
    label_436b06:
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    if (sub_4d0fe0(eax_5.b, "]=", var_100c, 2) != 0)
        goto label_436af3
    
    void* ecx_4 = &var_100c[2]
    int32_t* var_14_3 = &var_2018
    var_100c = ecx_4
    ebx = sub_4d11d0(&var_2018, &var_100c, ecx_4, var_14_3)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_5 = var_1010
    
    if (ecx_5 s>= 0 && ecx_5 s< data_63ecb0)
        *((ecx_5 << 2) + &data_12dc648) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_13 = sub_4d0fe0(eax_3.b, "#B[", ecx, 3)

if (eax_13 == 0)
    int32_t* var_14_5 = &var_1010
    var_100c = &ecx[3]
    int32_t eax_15 = sub_4d11d0(&var_1010, &var_100c, &ecx[3], var_14_5)
    
    if (eax_15 != 0)
        goto label_436af3
    
    if (sub_4d0fe0(eax_15.b, "]=", var_100c, 2) != 0)
        goto label_436af3
    
    void* ecx_13 = &var_100c[2]
    int32_t* var_14_7 = &var_2018
    var_100c = ecx_13
    ebx = sub_4d11d0(&var_2018, &var_100c, ecx_13, var_14_7)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_14 = var_1010
    
    if (ecx_14 s>= 0 && ecx_14 s< data_63ecb4)
        *((ecx_14 << 2) + &data_12de588) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_23 = sub_4d0fe0(eax_13.b, "#C[", ecx, 3)

if (eax_23 == 0)
    int32_t* var_14_9 = &var_1010
    var_100c = &ecx[3]
    int32_t eax_25 = sub_4d11d0(&var_1010, &var_100c, &ecx[3], var_14_9)
    
    if (eax_25 != 0)
        goto label_436af3
    
    if (sub_434540(eax_25.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_22 = var_1010
    
    if (ecx_22 s>= 0 && ecx_22 s< data_63ecb8)
        *((ecx_22 << 2) + &data_12e04c8) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_33 = sub_4d0fe0(eax_23.b, "#D[", ecx, 3)
char** edx_8 = &var_100c

if (eax_33 == 0)
    int32_t* var_14_13 = &var_1010
    var_100c = &ecx[3]
    int32_t eax_35 = sub_4d11d0(&var_1010, edx_8, &ecx[3], var_14_13)
    
    if (eax_35 != 0)
        goto label_436af3
    
    if (sub_434540(eax_35.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_30 = var_1010
    
    if (ecx_30 s>= 0 && ecx_30 s< data_63ecbc)
        *((ecx_30 << 2) + &data_12e2408) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_43 = sub_434540(eax_33.b, edx_8, ecx, "#E[")
char* ecx_35 = var_100c
char** edx_11 = &var_100c

if (eax_43 == 0)
    int32_t eax_45 = sub_4d11d0(&var_1010, edx_11, ecx_35, &var_1010)
    
    if (eax_45 != 0)
        goto label_436af3
    
    if (sub_434540(eax_45.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_38 = var_1010
    
    if (ecx_38 s>= 0 && ecx_38 s< data_63ecc0)
        *((ecx_38 << 2) + &data_12e4348) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_53 = sub_434540(eax_43.b, edx_11, ecx_35, "#F[")
char* ecx_42 = var_100c
char** edx_14 = &var_100c

if (eax_53 == 0)
    int32_t eax_55 = sub_4d11d0(&var_1010, edx_14, ecx_42, &var_1010)
    
    if (eax_55 != 0)
        goto label_436af3
    
    if (sub_434540(eax_55.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_45 = var_1010
    
    if (ecx_45 s>= 0 && ecx_45 s< data_63ecc4)
        *((ecx_45 << 2) + &data_12e6288) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_63 = sub_434540(eax_53.b, edx_14, ecx_42, "#G[")
char* ecx_49 = var_100c
char** edx_17 = &var_100c

if (eax_63 == 0)
    int32_t eax_65 = sub_4d11d0(&var_1010, edx_17, ecx_49, &var_1010)
    
    if (eax_65 != 0)
        goto label_436af3
    
    if (sub_434540(eax_65.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_52 = var_1010
    
    if (ecx_52 s>= 0 && ecx_52 s< data_63ecc8)
        *((ecx_52 << 2) + &data_12edc4c) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_73 = sub_434540(eax_63.b, edx_17, ecx_49, "#Z[")
char* ecx_56 = var_100c
char** edx_20 = &var_100c

if (eax_73 == 0)
    int32_t eax_75 = sub_4d11d0(&var_1010, edx_20, ecx_56, &var_1010)
    
    if (eax_75 != 0)
        goto label_436af3
    
    if (sub_434540(eax_75.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t ecx_59 = var_1010
    
    if (ecx_59 s>= 0 && ecx_59 s< data_63ed14)
        *((ecx_59 << 2) + &data_12efb8c) = var_2018
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_83 = sub_434540(eax_73.b, edx_20, ecx_56, "#AB[")
char* ecx_63 = var_100c
char** edx_23 = &var_100c

if (eax_83 == 0)
    int32_t eax_85 = sub_4d11d0(&var_1010, edx_23, ecx_63, &var_1010)
    
    if (eax_85 != 0)
        goto label_436af3
    
    if (sub_434540(eax_85.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_89 = var_1010
    
    if (eax_89 s>= 0 && eax_89 s< data_63ed18)
        int32_t ecx_67 = eax_89 & 0x8000001f
        
        if (ecx_67 s< 0)
            ecx_67 = ((ecx_67 - 1) | 0xffffffe0) + 1
        
        int32_t eax_90
        int32_t edx_26
        edx_26:eax_90 = sx.q(eax_89)
        int32_t eax_92 = (eax_90 + (edx_26 & 0x1f)) s>> 5
        *((eax_92 << 2) + &data_12dc648) = (not.d(*((ecx_67 << 2) + &data_611440))
            & *((eax_92 << 2) + &data_12dc648)) | (var_2018 & 1) << ecx_67.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_96 = sub_434540(eax_83.b, edx_23, ecx_63, "#BB[")
char* ecx_73 = var_100c
char** edx_32 = &var_100c

if (eax_96 == 0)
    int32_t eax_98 = sub_4d11d0(&var_1010, edx_32, ecx_73, &var_1010)
    
    if (eax_98 != 0)
        goto label_436af3
    
    if (sub_434540(eax_98.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_102 = var_1010
    
    if (eax_102 s>= 0 && eax_102 s< data_63ed1c)
        int32_t ecx_77 = eax_102 & 0x8000001f
        
        if (ecx_77 s< 0)
            ecx_77 = ((ecx_77 - 1) | 0xffffffe0) + 1
        
        int32_t eax_103
        int32_t edx_35
        edx_35:eax_103 = sx.q(eax_102)
        int32_t eax_105 = (eax_103 + (edx_35 & 0x1f)) s>> 5
        *((eax_105 << 2) + &data_12de588) = (not.d(*((ecx_77 << 2) + &data_611440))
            & *((eax_105 << 2) + &data_12de588)) | (var_2018 & 1) << ecx_77.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_109 = sub_434540(eax_96.b, edx_32, ecx_73, "#CB[")
char* ecx_83 = var_100c
char** edx_41 = &var_100c

if (eax_109 == 0)
    int32_t eax_111 = sub_4d11d0(&var_1010, edx_41, ecx_83, &var_1010)
    
    if (eax_111 != 0)
        goto label_436af3
    
    if (sub_434540(eax_111.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_115 = var_1010
    
    if (eax_115 s>= 0 && eax_115 s< data_63ed20)
        int32_t ecx_87 = eax_115 & 0x8000001f
        
        if (ecx_87 s< 0)
            ecx_87 = ((ecx_87 - 1) | 0xffffffe0) + 1
        
        int32_t eax_116
        int32_t edx_44
        edx_44:eax_116 = sx.q(eax_115)
        int32_t eax_118 = (eax_116 + (edx_44 & 0x1f)) s>> 5
        *((eax_118 << 2) + &data_12e04c8) = (not.d(*((ecx_87 << 2) + &data_611440))
            & *((eax_118 << 2) + &data_12e04c8)) | (var_2018 & 1) << ecx_87.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_122 = sub_434540(eax_109.b, edx_41, ecx_83, "#DB[")
char* ecx_93 = var_100c
char** edx_50 = &var_100c

if (eax_122 == 0)
    int32_t eax_124 = sub_4d11d0(&var_1010, edx_50, ecx_93, &var_1010)
    
    if (eax_124 != 0)
        goto label_436af3
    
    if (sub_434540(eax_124.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_128 = var_1010
    
    if (eax_128 s>= 0 && eax_128 s< data_63ed24)
        int32_t ecx_97 = eax_128 & 0x8000001f
        
        if (ecx_97 s< 0)
            ecx_97 = ((ecx_97 - 1) | 0xffffffe0) + 1
        
        int32_t eax_129
        int32_t edx_53
        edx_53:eax_129 = sx.q(eax_128)
        int32_t eax_131 = (eax_129 + (edx_53 & 0x1f)) s>> 5
        *((eax_131 << 2) + &data_12e2408) = (not.d(*((ecx_97 << 2) + &data_611440))
            & *((eax_131 << 2) + &data_12e2408)) | (var_2018 & 1) << ecx_97.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_135 = sub_434540(eax_122.b, edx_50, ecx_93, "#EB[")
char* ecx_103 = var_100c
char** edx_59 = &var_100c

if (eax_135 == 0)
    int32_t eax_137 = sub_4d11d0(&var_1010, edx_59, ecx_103, &var_1010)
    
    if (eax_137 != 0)
        goto label_436af3
    
    if (sub_434540(eax_137.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_141 = var_1010
    
    if (eax_141 s>= 0 && eax_141 s< data_63ed28)
        int32_t ecx_107 = eax_141 & 0x8000001f
        
        if (ecx_107 s< 0)
            ecx_107 = ((ecx_107 - 1) | 0xffffffe0) + 1
        
        int32_t eax_142
        int32_t edx_62
        edx_62:eax_142 = sx.q(eax_141)
        int32_t eax_144 = (eax_142 + (edx_62 & 0x1f)) s>> 5
        *((eax_144 << 2) + &data_12e4348) = (not.d(*((ecx_107 << 2) + &data_611440))
            & *((eax_144 << 2) + &data_12e4348)) | (var_2018 & 1) << ecx_107.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_148 = sub_434540(eax_135.b, edx_59, ecx_103, "#FB[")
char* ecx_113 = var_100c
char** edx_68 = &var_100c

if (eax_148 == 0)
    int32_t eax_150 = sub_4d11d0(&var_1010, edx_68, ecx_113, &var_1010)
    
    if (eax_150 != 0)
        goto label_436af3
    
    if (sub_434540(eax_150.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_154 = var_1010
    
    if (eax_154 s>= 0 && eax_154 s< data_63ed2c)
        int32_t ecx_117 = eax_154 & 0x8000001f
        
        if (ecx_117 s< 0)
            ecx_117 = ((ecx_117 - 1) | 0xffffffe0) + 1
        
        int32_t eax_155
        int32_t edx_71
        edx_71:eax_155 = sx.q(eax_154)
        int32_t eax_157 = (eax_155 + (edx_71 & 0x1f)) s>> 5
        *((eax_157 << 2) + &data_12e6288) = (not.d(*((ecx_117 << 2) + &data_611440))
            & *((eax_157 << 2) + &data_12e6288)) | (var_2018 & 1) << ecx_117.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_161 = sub_434540(eax_148.b, edx_68, ecx_113, "#GB[")
char* ecx_123 = var_100c
char** edx_77 = &var_100c

if (eax_161 == 0)
    int32_t eax_163 = sub_4d11d0(&var_1010, edx_77, ecx_123, &var_1010)
    
    if (eax_163 != 0)
        goto label_436af3
    
    if (sub_434540(eax_163.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_167 = var_1010
    
    if (eax_167 s>= 0 && eax_167 s< data_63ed30)
        int32_t ecx_127 = eax_167 & 0x8000001f
        
        if (ecx_127 s< 0)
            ecx_127 = ((ecx_127 - 1) | 0xffffffe0) + 1
        
        int32_t eax_168
        int32_t edx_80
        edx_80:eax_168 = sx.q(eax_167)
        int32_t eax_170 = (eax_168 + (edx_80 & 0x1f)) s>> 5
        *((eax_170 << 2) + &data_12edc4c) = (not.d(*((ecx_127 << 2) + &data_611440))
            & *((eax_170 << 2) + &data_12edc4c)) | (var_2018 & 1) << ecx_127.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_174 = sub_434540(eax_161.b, edx_77, ecx_123, "#ZB[")
char* ecx_133 = var_100c
char** edx_86 = &var_100c

if (eax_174 == 0)
    int32_t eax_176 = sub_4d11d0(&var_1010, edx_86, ecx_133, &var_1010)
    
    if (eax_176 != 0)
        goto label_436af3
    
    if (sub_434540(eax_176.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_180 = var_1010
    
    if (eax_180 s>= 0 && eax_180 s< data_63ed7c)
        int32_t ecx_137 = eax_180 & 0x8000001f
        
        if (ecx_137 s< 0)
            ecx_137 = ((ecx_137 - 1) | 0xffffffe0) + 1
        
        int32_t eax_181
        int32_t edx_89
        edx_89:eax_181 = sx.q(eax_180)
        int32_t eax_183 = (eax_181 + (edx_89 & 0x1f)) s>> 5
        *((eax_183 << 2) + &data_12efb8c) = (not.d(*((ecx_137 << 2) + &data_611440))
            & *((eax_183 << 2) + &data_12efb8c)) | (var_2018 & 1) << ecx_137.b
        *arg1 = ebx
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    goto label_436b06

int32_t eax_187 = sub_434540(eax_174.b, edx_86, ecx_133, "#A2B[")
char* ecx_143 = var_100c
char** edx_95 = &var_100c
int32_t eax_196
int32_t ecx_147
int32_t edi_2

if (eax_187 != 0)
    int32_t eax_200 = sub_434540(eax_187.b, edx_95, ecx_143, "#B2B[")
    char* ecx_153 = var_100c
    char** edx_100 = &var_100c
    int32_t eax_209
    int32_t ecx_159
    int32_t edi_6
    
    if (eax_200 == 0)
        int32_t eax_202 = sub_4d11d0(&var_1010, edx_100, ecx_153, &var_1010)
        
        if (eax_202 != 0)
            goto label_436af3
        
        if (sub_434540(eax_202.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_206 = var_1010
        
        if (eax_206 s< 0 || eax_206 s>= data_63ed1c + 0x1a)
            goto label_436b06
        
        int32_t esi_34 = eax_206 & 0x8000000f
        
        if (esi_34 s< 0)
            esi_34 = ((esi_34 - 1) | 0xfffffff0) + 1
        
        int32_t eax_207
        int32_t edx_103
        edx_103:eax_207 = sx.q(eax_206)
        eax_209 = (eax_207 + (edx_103 & 0xf)) s>> 4
        edi_6 = (var_2018 & 3) << (esi_34.b * 2)
        ecx_159 = *((esi_34 << 2) + &data_611400)
        goto label_435612
    
    int32_t eax_213 = sub_434540(eax_200.b, edx_100, ecx_153, "#C2B[")
    char* ecx_165 = var_100c
    char** edx_105 = &var_100c
    int32_t eax_222
    int32_t ecx_171
    int32_t edi_10
    
    if (eax_213 == 0)
        int32_t eax_215 = sub_4d11d0(&var_1010, edx_105, ecx_165, &var_1010)
        
        if (eax_215 != 0)
            goto label_436af3
        
        if (sub_434540(eax_215.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_219 = var_1010
        
        if (eax_219 s< 0 || eax_219 s>= data_63ed20 + 0x1a)
            goto label_436b06
        
        int32_t esi_38 = eax_219 & 0x8000000f
        
        if (esi_38 s< 0)
            esi_38 = ((esi_38 - 1) | 0xfffffff0) + 1
        
        int32_t eax_220
        int32_t edx_108
        edx_108:eax_220 = sx.q(eax_219)
        eax_222 = (eax_220 + (edx_108 & 0xf)) s>> 4
        edi_10 = (var_2018 & 3) << (esi_38.b * 2)
        ecx_171 = *((esi_38 << 2) + &data_611400)
        goto label_435717
    
    int32_t eax_226 = sub_434540(eax_213.b, edx_105, ecx_165, "#D2B[")
    char* ecx_177 = var_100c
    char** edx_110 = &var_100c
    int32_t eax_235
    int32_t ecx_183
    int32_t edi_14
    
    if (eax_226 == 0)
        int32_t eax_228 = sub_4d11d0(&var_1010, edx_110, ecx_177, &var_1010)
        
        if (eax_228 != 0)
            goto label_436af3
        
        if (sub_434540(eax_228.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_232 = var_1010
        
        if (eax_232 s< 0 || eax_232 s>= data_63ed24 + 0x1a)
            goto label_436b06
        
        int32_t esi_42 = eax_232 & 0x8000000f
        
        if (esi_42 s< 0)
            esi_42 = ((esi_42 - 1) | 0xfffffff0) + 1
        
        int32_t eax_233
        int32_t edx_113
        edx_113:eax_233 = sx.q(eax_232)
        eax_235 = (eax_233 + (edx_113 & 0xf)) s>> 4
        edi_14 = (var_2018 & 3) << (esi_42.b * 2)
        ecx_183 = *((esi_42 << 2) + &data_611400)
        goto label_43581c
    
    int32_t eax_239 = sub_434540(eax_226.b, edx_110, ecx_177, "#E2B[")
    char* ecx_189 = var_100c
    char** edx_115 = &var_100c
    int32_t eax_248
    int32_t ecx_195
    int32_t edi_18
    
    if (eax_239 == 0)
        int32_t eax_241 = sub_4d11d0(&var_1010, edx_115, ecx_189, &var_1010)
        
        if (eax_241 != 0)
            goto label_436af3
        
        if (sub_434540(eax_241.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_245 = var_1010
        
        if (eax_245 s< 0 || eax_245 s>= data_63ed28 + 0x1a)
            goto label_436b06
        
        int32_t esi_46 = eax_245 & 0x8000000f
        
        if (esi_46 s< 0)
            esi_46 = ((esi_46 - 1) | 0xfffffff0) + 1
        
        int32_t eax_246
        int32_t edx_118
        edx_118:eax_246 = sx.q(eax_245)
        eax_248 = (eax_246 + (edx_118 & 0xf)) s>> 4
        edi_18 = (var_2018 & 3) << (esi_46.b * 2)
        ecx_195 = *((esi_46 << 2) + &data_611400)
        goto label_435921
    
    int32_t eax_252 = sub_434540(eax_239.b, edx_115, ecx_189, "#F2B[")
    char* ecx_201 = var_100c
    char** edx_120 = &var_100c
    int32_t eax_261
    int32_t ecx_207
    int32_t edi_22
    
    if (eax_252 == 0)
        int32_t eax_254 = sub_4d11d0(&var_1010, edx_120, ecx_201, &var_1010)
        
        if (eax_254 != 0)
            goto label_436af3
        
        if (sub_434540(eax_254.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_258 = var_1010
        
        if (eax_258 s< 0 || eax_258 s>= data_63ed2c + 0x1a)
            goto label_436b06
        
        int32_t esi_50 = eax_258 & 0x8000000f
        
        if (esi_50 s< 0)
            esi_50 = ((esi_50 - 1) | 0xfffffff0) + 1
        
        int32_t eax_259
        int32_t edx_123
        edx_123:eax_259 = sx.q(eax_258)
        eax_261 = (eax_259 + (edx_123 & 0xf)) s>> 4
        edi_22 = (var_2018 & 3) << (esi_50.b * 2)
        ecx_207 = *((esi_50 << 2) + &data_611400)
        goto label_435a26
    
    int32_t eax_265 = sub_434540(eax_252.b, edx_120, ecx_201, "#G2B[")
    char* ecx_213 = var_100c
    char** edx_125 = &var_100c
    int32_t eax_274
    int32_t ecx_219
    int32_t edi_26
    
    if (eax_265 == 0)
        int32_t eax_267 = sub_4d11d0(&var_1010, edx_125, ecx_213, &var_1010)
        
        if (eax_267 != 0)
            goto label_436af3
        
        if (sub_434540(eax_267.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_271 = var_1010
        
        if (eax_271 s< 0 || eax_271 s>= data_63ed30 + 0x1a)
            goto label_436b06
        
        int32_t esi_54 = eax_271 & 0x8000000f
        
        if (esi_54 s< 0)
            esi_54 = ((esi_54 - 1) | 0xfffffff0) + 1
        
        int32_t eax_272
        int32_t edx_128
        edx_128:eax_272 = sx.q(eax_271)
        eax_274 = (eax_272 + (edx_128 & 0xf)) s>> 4
        edi_26 = (var_2018 & 3) << (esi_54.b * 2)
        ecx_219 = *((esi_54 << 2) + &data_611400)
        goto label_435b2b
    
    int32_t eax_278 = sub_434540(eax_265.b, edx_125, ecx_213, "#Z2B[")
    char* ecx_225 = var_100c
    char** edx_130 = &var_100c
    int32_t eax_287
    int32_t ecx_231
    int32_t edi_30
    
    if (eax_278 == 0)
        int32_t eax_280 = sub_4d11d0(&var_1010, edx_130, ecx_225, &var_1010)
        
        if (eax_280 != 0)
            goto label_436af3
        
        if (sub_434540(eax_280.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_284 = var_1010
        
        if (eax_284 s< 0 || eax_284 s>= data_63ed7c + 0x1a)
            goto label_436b06
        
        int32_t esi_58 = eax_284 & 0x8000000f
        
        if (esi_58 s< 0)
            esi_58 = ((esi_58 - 1) | 0xfffffff0) + 1
        
        int32_t eax_285
        int32_t edx_133
        edx_133:eax_285 = sx.q(eax_284)
        eax_287 = (eax_285 + (edx_133 & 0xf)) s>> 4
        edi_30 = (var_2018 & 3) << (esi_58.b * 2)
        ecx_231 = *((esi_58 << 2) + &data_611400)
        goto label_435c30
    
    int32_t eax_291 = sub_434540(eax_278.b, edx_130, ecx_225, "#A4B[")
    char* ecx_237 = var_100c
    char** edx_135 = &var_100c
    
    if (eax_291 != 0)
        int32_t eax_300 = sub_434540(eax_291.b, edx_135, ecx_237, "#B4B[")
        char* ecx_241 = var_100c
        char** edx_140 = &var_100c
        
        if (eax_300 == 0)
            int32_t eax_302 = sub_4d11d0(&var_1010, edx_140, ecx_241, &var_1010)
            
            if (eax_302 != 0)
                goto label_436af3
            
            if (sub_434540(eax_302.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_306 = var_1010
            
            if (eax_306 s< 0 || eax_306 s>= data_63edec)
                goto label_436b06
            
            int32_t esi_66 = eax_306 & 0x80000007
            
            if (esi_66 s< 0)
                esi_66 = ((esi_66 - 1) | 0xfffffff8) + 1
            
            int32_t eax_307
            int32_t edx_143
            edx_143:eax_307 = sx.q(eax_306)
            eax_209 = (eax_307 + (edx_143 & 7)) s>> 3
            edi_6 = (var_2018 & 0xf) << (esi_66 << 2).b
            ecx_159 = *((esi_66 << 2) + &data_6113e0)
            goto label_435612
        
        int32_t eax_309 = sub_434540(eax_300.b, edx_140, ecx_241, "#C4B[")
        char* ecx_245 = var_100c
        char** edx_145 = &var_100c
        
        if (eax_309 == 0)
            int32_t eax_311 = sub_4d11d0(&var_1010, edx_145, ecx_245, &var_1010)
            
            if (eax_311 != 0)
                goto label_436af3
            
            if (sub_434540(eax_311.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_315 = var_1010
            
            if (eax_315 s< 0 || eax_315 s>= data_63edf0)
                goto label_436b06
            
            int32_t esi_70 = eax_315 & 0x80000007
            
            if (esi_70 s< 0)
                esi_70 = ((esi_70 - 1) | 0xfffffff8) + 1
            
            int32_t eax_316
            int32_t edx_148
            edx_148:eax_316 = sx.q(eax_315)
            eax_222 = (eax_316 + (edx_148 & 7)) s>> 3
            edi_10 = (var_2018 & 0xf) << (esi_70 << 2).b
            ecx_171 = *((esi_70 << 2) + &data_6113e0)
            goto label_435717
        
        int32_t eax_318 = sub_434540(eax_309.b, edx_145, ecx_245, "#D4B[")
        char* ecx_249 = var_100c
        char** edx_150 = &var_100c
        
        if (eax_318 == 0)
            int32_t eax_320 = sub_4d11d0(&var_1010, edx_150, ecx_249, &var_1010)
            
            if (eax_320 != 0)
                goto label_436af3
            
            if (sub_434540(eax_320.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_324 = var_1010
            
            if (eax_324 s< 0 || eax_324 s>= data_63edf4)
                goto label_436b06
            
            int32_t esi_74 = eax_324 & 0x80000007
            
            if (esi_74 s< 0)
                esi_74 = ((esi_74 - 1) | 0xfffffff8) + 1
            
            int32_t eax_325
            int32_t edx_153
            edx_153:eax_325 = sx.q(eax_324)
            eax_235 = (eax_325 + (edx_153 & 7)) s>> 3
            edi_14 = (var_2018 & 0xf) << (esi_74 << 2).b
            ecx_183 = *((esi_74 << 2) + &data_6113e0)
            goto label_43581c
        
        int32_t eax_327 = sub_434540(eax_318.b, edx_150, ecx_249, "#E4B[")
        char* ecx_253 = var_100c
        char** edx_155 = &var_100c
        
        if (eax_327 == 0)
            int32_t eax_329 = sub_4d11d0(&var_1010, edx_155, ecx_253, &var_1010)
            
            if (eax_329 != 0)
                goto label_436af3
            
            if (sub_434540(eax_329.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_333 = var_1010
            
            if (eax_333 s< 0 || eax_333 s>= data_63edf8)
                goto label_436b06
            
            int32_t esi_78 = eax_333 & 0x80000007
            
            if (esi_78 s< 0)
                esi_78 = ((esi_78 - 1) | 0xfffffff8) + 1
            
            int32_t eax_334
            int32_t edx_158
            edx_158:eax_334 = sx.q(eax_333)
            eax_248 = (eax_334 + (edx_158 & 7)) s>> 3
            edi_18 = (var_2018 & 0xf) << (esi_78 << 2).b
            ecx_195 = *((esi_78 << 2) + &data_6113e0)
            goto label_435921
        
        int32_t eax_336 = sub_434540(eax_327.b, edx_155, ecx_253, "#F4B[")
        char* ecx_257 = var_100c
        char** edx_160 = &var_100c
        
        if (eax_336 == 0)
            int32_t eax_338 = sub_4d11d0(&var_1010, edx_160, ecx_257, &var_1010)
            
            if (eax_338 != 0)
                goto label_436af3
            
            if (sub_434540(eax_338.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_342 = var_1010
            
            if (eax_342 s< 0 || eax_342 s>= data_63edfc)
                goto label_436b06
            
            int32_t esi_82 = eax_342 & 0x80000007
            
            if (esi_82 s< 0)
                esi_82 = ((esi_82 - 1) | 0xfffffff8) + 1
            
            int32_t eax_343
            int32_t edx_163
            edx_163:eax_343 = sx.q(eax_342)
            eax_261 = (eax_343 + (edx_163 & 7)) s>> 3
            edi_22 = (var_2018 & 0xf) << (esi_82 << 2).b
            ecx_207 = *((esi_82 << 2) + &data_6113e0)
            goto label_435a26
        
        int32_t eax_345 = sub_434540(eax_336.b, edx_160, ecx_257, "#G4B[")
        char* ecx_261 = var_100c
        char** edx_165 = &var_100c
        
        if (eax_345 == 0)
            int32_t eax_347 = sub_4d11d0(&var_1010, edx_165, ecx_261, &var_1010)
            
            if (eax_347 != 0)
                goto label_436af3
            
            if (sub_434540(eax_347.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_351 = var_1010
            
            if (eax_351 s< 0 || eax_351 s>= data_63ee00)
                goto label_436b06
            
            int32_t esi_86 = eax_351 & 0x80000007
            
            if (esi_86 s< 0)
                esi_86 = ((esi_86 - 1) | 0xfffffff8) + 1
            
            int32_t eax_352
            int32_t edx_168
            edx_168:eax_352 = sx.q(eax_351)
            eax_274 = (eax_352 + (edx_168 & 7)) s>> 3
            edi_26 = (var_2018 & 0xf) << (esi_86 << 2).b
            ecx_219 = *((esi_86 << 2) + &data_6113e0)
            goto label_435b2b
        
        int32_t eax_354 = sub_434540(eax_345.b, edx_165, ecx_261, "#Z4B[")
        char* ecx_265 = var_100c
        char** edx_170 = &var_100c
        
        if (eax_354 == 0)
            int32_t eax_356 = sub_4d11d0(&var_1010, edx_170, ecx_265, &var_1010)
            
            if (eax_356 != 0)
                goto label_436af3
            
            if (sub_434540(eax_356.b, &var_100c, var_100c, "]=") != 0)
                goto label_436af3
            
            ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
            
            if (ebx != 0)
                goto label_436af3
            
            int32_t eax_360 = var_1010
            
            if (eax_360 s< 0 || eax_360 s>= data_63ee4c)
                goto label_436b06
            
            int32_t esi_90 = eax_360 & 0x80000007
            
            if (esi_90 s< 0)
                esi_90 = ((esi_90 - 1) | 0xfffffff8) + 1
            
            int32_t eax_361
            int32_t edx_173
            edx_173:eax_361 = sx.q(eax_360)
            eax_287 = (eax_361 + (edx_173 & 7)) s>> 3
            edi_30 = (var_2018 & 0xf) << (esi_90 << 2).b
            ecx_231 = *((esi_90 << 2) + &data_6113e0)
            goto label_435c30
        
        int32_t eax_363 = sub_434540(eax_354.b, edx_170, ecx_265, "#A8B[")
        char* ecx_269 = var_100c
        char** edx_175 = &var_100c
        
        if (eax_363 != 0)
            int32_t eax_372 = sub_434540(eax_363.b, edx_175, ecx_269, "#B8B[")
            char* ecx_273 = var_100c
            char** edx_180 = &var_100c
            
            if (eax_372 == 0)
                int32_t eax_374 = sub_4d11d0(&var_1010, edx_180, ecx_273, &var_1010)
                
                if (eax_374 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_374.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_378 = var_1010
                
                if (eax_378 s< 0 || eax_378 s>= data_63ee54)
                    goto label_436b06
                
                int32_t esi_98 = eax_378 & 0x80000003
                
                if (esi_98 s< 0)
                    esi_98 = ((esi_98 - 1) | 0xfffffffc) + 1
                
                int32_t eax_379
                int32_t edx_183
                edx_183:eax_379 = sx.q(eax_378)
                eax_209 = (eax_379 + (edx_183 & 3)) s>> 2
                edi_6 = zx.d(var_2018.b) << (esi_98 << 3).b
                ecx_159 = *((esi_98 << 2) + &data_610f74)
            label_435612:
                *((eax_209 << 2) + &data_12de588) =
                    edi_6 | (not.d(ecx_159) & *((eax_209 << 2) + &data_12de588))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_381 = sub_434540(eax_372.b, edx_180, ecx_273, "#C8B[")
            char* ecx_277 = var_100c
            char** edx_185 = &var_100c
            
            if (eax_381 == 0)
                int32_t eax_383 = sub_4d11d0(&var_1010, edx_185, ecx_277, &var_1010)
                
                if (eax_383 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_383.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_387 = var_1010
                
                if (eax_387 s< 0 || eax_387 s>= data_63ee58)
                    goto label_436b06
                
                int32_t esi_102 = eax_387 & 0x80000003
                
                if (esi_102 s< 0)
                    esi_102 = ((esi_102 - 1) | 0xfffffffc) + 1
                
                int32_t eax_388
                int32_t edx_188
                edx_188:eax_388 = sx.q(eax_387)
                eax_222 = (eax_388 + (edx_188 & 3)) s>> 2
                edi_10 = zx.d(var_2018.b) << (esi_102 << 3).b
                ecx_171 = *((esi_102 << 2) + &data_610f74)
            label_435717:
                *((eax_222 << 2) + &data_12e04c8) =
                    edi_10 | (not.d(ecx_171) & *((eax_222 << 2) + &data_12e04c8))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_390 = sub_434540(eax_381.b, edx_185, ecx_277, "#D8B[")
            char* ecx_281 = var_100c
            char** edx_190 = &var_100c
            
            if (eax_390 == 0)
                int32_t eax_392 = sub_4d11d0(&var_1010, edx_190, ecx_281, &var_1010)
                
                if (eax_392 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_392.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_396 = var_1010
                
                if (eax_396 s< 0 || eax_396 s>= data_63ee5c)
                    goto label_436b06
                
                int32_t esi_106 = eax_396 & 0x80000003
                
                if (esi_106 s< 0)
                    esi_106 = ((esi_106 - 1) | 0xfffffffc) + 1
                
                int32_t eax_397
                int32_t edx_193
                edx_193:eax_397 = sx.q(eax_396)
                eax_235 = (eax_397 + (edx_193 & 3)) s>> 2
                edi_14 = zx.d(var_2018.b) << (esi_106 << 3).b
                ecx_183 = *((esi_106 << 2) + &data_610f74)
            label_43581c:
                *((eax_235 << 2) + &data_12e2408) =
                    edi_14 | (not.d(ecx_183) & *((eax_235 << 2) + &data_12e2408))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_399 = sub_434540(eax_390.b, edx_190, ecx_281, "#E8B[")
            char* ecx_285 = var_100c
            char** edx_195 = &var_100c
            
            if (eax_399 == 0)
                int32_t eax_401 = sub_4d11d0(&var_1010, edx_195, ecx_285, &var_1010)
                
                if (eax_401 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_401.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_405 = var_1010
                
                if (eax_405 s< 0 || eax_405 s>= data_63ee60)
                    goto label_436b06
                
                int32_t esi_110 = eax_405 & 0x80000003
                
                if (esi_110 s< 0)
                    esi_110 = ((esi_110 - 1) | 0xfffffffc) + 1
                
                int32_t eax_406
                int32_t edx_198
                edx_198:eax_406 = sx.q(eax_405)
                eax_248 = (eax_406 + (edx_198 & 3)) s>> 2
                edi_18 = zx.d(var_2018.b) << (esi_110 << 3).b
                ecx_195 = *((esi_110 << 2) + &data_610f74)
            label_435921:
                *((eax_248 << 2) + &data_12e4348) =
                    edi_18 | (not.d(ecx_195) & *((eax_248 << 2) + &data_12e4348))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_408 = sub_434540(eax_399.b, edx_195, ecx_285, "#F8B[")
            char* ecx_289 = var_100c
            char** edx_200 = &var_100c
            
            if (eax_408 == 0)
                int32_t eax_410 = sub_4d11d0(&var_1010, edx_200, ecx_289, &var_1010)
                
                if (eax_410 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_410.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_414 = var_1010
                
                if (eax_414 s< 0 || eax_414 s>= data_63ee64)
                    goto label_436b06
                
                int32_t esi_114 = eax_414 & 0x80000003
                
                if (esi_114 s< 0)
                    esi_114 = ((esi_114 - 1) | 0xfffffffc) + 1
                
                int32_t eax_415
                int32_t edx_203
                edx_203:eax_415 = sx.q(eax_414)
                eax_261 = (eax_415 + (edx_203 & 3)) s>> 2
                edi_22 = zx.d(var_2018.b) << (esi_114 << 3).b
                ecx_207 = *((esi_114 << 2) + &data_610f74)
            label_435a26:
                *((eax_261 << 2) + &data_12e6288) =
                    edi_22 | (not.d(ecx_207) & *((eax_261 << 2) + &data_12e6288))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_417 = sub_434540(eax_408.b, edx_200, ecx_289, "#G8B[")
            char* ecx_293 = var_100c
            char** edx_205 = &var_100c
            
            if (eax_417 == 0)
                int32_t eax_419 = sub_4d11d0(&var_1010, edx_205, ecx_293, &var_1010)
                
                if (eax_419 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_419.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_423 = var_1010
                
                if (eax_423 s< 0 || eax_423 s>= data_63ee68)
                    goto label_436b06
                
                int32_t esi_118 = eax_423 & 0x80000003
                
                if (esi_118 s< 0)
                    esi_118 = ((esi_118 - 1) | 0xfffffffc) + 1
                
                int32_t eax_424
                int32_t edx_208
                edx_208:eax_424 = sx.q(eax_423)
                eax_274 = (eax_424 + (edx_208 & 3)) s>> 2
                edi_26 = zx.d(var_2018.b) << (esi_118 << 3).b
                ecx_219 = *((esi_118 << 2) + &data_610f74)
            label_435b2b:
                *((eax_274 << 2) + &data_12edc4c) =
                    edi_26 | (not.d(ecx_219) & *((eax_274 << 2) + &data_12edc4c))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_426 = sub_434540(eax_417.b, edx_205, ecx_293, "#Z8B[")
            char* ecx_297 = var_100c
            char** edx_210 = &var_100c
            
            if (eax_426 == 0)
                int32_t eax_428 = sub_4d11d0(&var_1010, edx_210, ecx_297, &var_1010)
                
                if (eax_428 != 0)
                    goto label_436af3
                
                if (sub_434540(eax_428.b, &var_100c, var_100c, "]=") != 0)
                    goto label_436af3
                
                ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_432 = var_1010
                
                if (eax_432 s< 0 || eax_432 s>= data_63eeb4)
                    goto label_436b06
                
                int32_t esi_122 = eax_432 & 0x80000003
                
                if (esi_122 s< 0)
                    esi_122 = ((esi_122 - 1) | 0xfffffffc) + 1
                
                int32_t eax_433
                int32_t edx_213
                edx_213:eax_433 = sx.q(eax_432)
                eax_287 = (eax_433 + (edx_213 & 3)) s>> 2
                edi_30 = zx.d(var_2018.b) << (esi_122 << 3).b
                ecx_231 = *((esi_122 << 2) + &data_610f74)
            label_435c30:
                *((eax_287 << 2) + &data_12efb8c) =
                    edi_30 | (not.d(ecx_231) & *((eax_287 << 2) + &data_12efb8c))
                *arg1 = ebx
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_435 = sub_434540(eax_426.b, edx_210, ecx_297, "#M[")
            char* ecx_301 = var_100c
            char** edx_215 = &var_100c
            char var_1008[0xfec]
            char const* const var_14_164
            void* esi_125
            void* edi_64
            
            if (eax_435 != 0)
                if (sub_434540(eax_435.b, edx_215, ecx_301, "#S[") != 0)
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 1
                
                int32_t eax_448 = sub_4d11d0(&var_1010, &var_100c, var_100c, &var_1010)
                ebx = eax_448
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_449
                int32_t ecx_312
                eax_449, ecx_312 = sub_434540(eax_448.b, &var_100c, var_100c, "]="")
                
                if (eax_449 != 0)
                    goto label_436af3
                
                int32_t var_14_168 = ecx_312
                
                if (sub_4d1140(&var_1008, &var_100c, var_100c, &var_1008, 0x1000) != 0)
                    goto label_436af3
                
                int32_t eax_452 = var_1010
                
                if (eax_452 s< 0 || eax_452 s>= data_63ecf8)
                    goto label_436b06
                
                esi_125 = (eax_452 << 2) + &data_12f788c
                edi_64 = (eax_452 << 2) + &data_12f594c
                sub_4d6c40(edi_64, esi_125)
                var_14_164 = "INI_S"
            else
                int32_t eax_437 = sub_4d11d0(&var_1010, edx_215, ecx_301, &var_1010)
                ebx = eax_437
                
                if (ebx != 0)
                    goto label_436af3
                
                int32_t eax_438
                int32_t ecx_303
                eax_438, ecx_303 = sub_434540(eax_437.b, &var_100c, var_100c, "]="")
                
                if (eax_438 != 0)
                    goto label_436af3
                
                int32_t var_14_163 = ecx_303
                
                if (sub_4d1140(&var_1008, &var_100c, var_100c, &var_1008, 0x1000) != 0)
                    goto label_436af3
                
                int32_t eax_441 = var_1010
                
                if (eax_441 s< 0 || eax_441 s>= data_63ece0)
                    goto label_436b06
                
                esi_125 = (eax_441 << 2) + &data_12f3a0c
                edi_64 = (eax_441 << 2) + &data_12f1acc
                sub_4d6c40(edi_64, esi_125)
                var_14_164 = "INI_M"
            
            sub_4cfe90(&var_1008, esi_125, edi_64, &var_1008, var_14_164)
            *arg1 = ebx
            *edx = var_100c
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return 0
        
        int32_t eax_365 = sub_4d11d0(&var_1010, edx_175, ecx_269, &var_1010)
        
        if (eax_365 != 0)
            goto label_436af3
        
        if (sub_434540(eax_365.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_369 = var_1010
        
        if (eax_369 s< 0 || eax_369 s>= data_63ee50)
            goto label_436b06
        
        int32_t esi_94 = eax_369 & 0x80000003
        
        if (esi_94 s< 0)
            esi_94 = ((esi_94 - 1) | 0xfffffffc) + 1
        
        int32_t eax_370
        int32_t edx_178
        edx_178:eax_370 = sx.q(eax_369)
        eax_196 = (eax_370 + (edx_178 & 3)) s>> 2
        edi_2 = zx.d(var_2018.b) << (esi_94 << 3).b
        ecx_147 = *((esi_94 << 2) + &data_610f74)
    else
        int32_t eax_293 = sub_4d11d0(&var_1010, edx_135, ecx_237, &var_1010)
        
        if (eax_293 != 0)
            goto label_436af3
        
        if (sub_434540(eax_293.b, &var_100c, var_100c, "]=") != 0)
            goto label_436af3
        
        ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
        
        if (ebx != 0)
            goto label_436af3
        
        int32_t eax_297 = var_1010
        
        if (eax_297 s< 0 || eax_297 s>= data_63ede8)
            goto label_436b06
        
        int32_t esi_62 = eax_297 & 0x80000007
        
        if (esi_62 s< 0)
            esi_62 = ((esi_62 - 1) | 0xfffffff8) + 1
        
        int32_t eax_298
        int32_t edx_138
        edx_138:eax_298 = sx.q(eax_297)
        eax_196 = (eax_298 + (edx_138 & 7)) s>> 3
        edi_2 = (var_2018 & 0xf) << (esi_62 << 2).b
        ecx_147 = *((esi_62 << 2) + &data_6113e0)
else
    int32_t eax_189 = sub_4d11d0(&var_1010, edx_95, ecx_143, &var_1010)
    
    if (eax_189 != 0)
        goto label_436af3
    
    if (sub_434540(eax_189.b, &var_100c, var_100c, "]=") != 0)
        goto label_436af3
    
    ebx = sub_4d11d0(&var_2018, &var_100c, var_100c, &var_2018)
    
    if (ebx != 0)
        goto label_436af3
    
    int32_t eax_193 = var_1010
    
    if (eax_193 s< 0 || eax_193 s>= data_63ed80)
        goto label_436b06
    
    int32_t esi_30 = eax_193 & 0x8000000f
    
    if (esi_30 s< 0)
        esi_30 = ((esi_30 - 1) | 0xfffffff0) + 1
    
    int32_t eax_194
    int32_t edx_98
    edx_98:eax_194 = sx.q(eax_193)
    eax_196 = (eax_194 + (edx_98 & 0xf)) s>> 4
    edi_2 = (var_2018 & 3) << (esi_30.b * 2)
    ecx_147 = *((esi_30 << 2) + &data_611400)

*((eax_196 << 2) + &data_12dc648) = edi_2 | (not.d(ecx_147) & *((eax_196 << 2) + &data_12dc648))
*arg1 = ebx
*edx = var_100c
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return 0
