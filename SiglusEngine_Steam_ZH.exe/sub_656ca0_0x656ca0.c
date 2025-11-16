// 函数: sub_656ca0
// 地址: 0x656ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4988
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
void* ebx = data_bac504
edi[1] = *edi
edi[3] = 0
int32_t esi = *(ebx + 0x4a8b0)
sub_5979b0(edi, 4)
int32_t* ecx_1 = *edi

if (ecx_1 == edi[1])
    ecx_1 = nullptr

*(ecx_1 + edi[3]) = esi
int32_t eax_6 = edi[3] + 4
edi[3] = eax_6
int32_t esi_1 = *(ebx + 0x4a8b4)
sub_5979b0(edi, eax_6 + 4)
int32_t* ecx_3 = *edi

if (ecx_3 == edi[1])
    ecx_3 = nullptr

*(ecx_3 + edi[3]) = esi_1
int32_t eax_10 = edi[3] + 4
edi[3] = eax_10
int32_t esi_2 = *(ebx + 0x4a8b8)
int32_t ebx_1 = *(ebx + 0x4a8bc)
sub_5979b0(edi, eax_10 + 8)
int32_t* ecx_5 = *edi

if (ecx_5 == edi[1])
    ecx_5 = nullptr

int32_t eax_12 = edi[3]
*(ecx_5 + eax_12) = esi_2
*(ecx_5 + eax_12 + 4) = ebx_1
int32_t eax_14 = edi[3] + 8
edi[3] = eax_14
int32_t esi_3 = *(ebx + 0x4a8c0)
int32_t ebx_2 = *(ebx + 0x4a8c4)
sub_5979b0(edi, eax_14 + 8)
int32_t* ecx_8 = *edi

if (ecx_8 == edi[1])
    ecx_8 = nullptr

int32_t eax_16 = edi[3]
*(ecx_8 + eax_16) = esi_3
*(ecx_8 + eax_16 + 4) = ebx_2
int32_t eax_18 = edi[3] + 8
edi[3] = eax_18
ebx_2.b = *(ebx + 0x4a8c8)
sub_5979b0(edi, eax_18 + 1)
char* ecx_10 = *edi

if (ecx_10 == edi[1])
    ecx_10 = nullptr

ecx_10[edi[3]] = ebx_2.b
int32_t eax_22 = edi[3] + 1
edi[3] = eax_22
int32_t esi_5 = *(ebx + 0x4a8cc)
sub_5979b0(edi, eax_22 + 4)
int32_t* ecx_12 = *edi

if (ecx_12 == edi[1])
    ecx_12 = nullptr

*(ecx_12 + edi[3]) = esi_5
int32_t eax_26 = edi[3] + 4
edi[3] = eax_26
int32_t esi_6 = *(ebx + 0x4a8d0)
sub_5979b0(edi, eax_26 + 4)
int32_t* ecx_14 = *edi

if (ecx_14 == edi[1])
    ecx_14 = nullptr

*(ecx_14 + edi[3]) = esi_6
int32_t eax_30 = edi[3] + 4
edi[3] = eax_30
int32_t esi_7 = *(ebx + 0x4a8d4)
sub_5979b0(edi, eax_30 + 4)
int32_t* ecx_16 = *edi

if (ecx_16 == edi[1])
    ecx_16 = nullptr

*(ecx_16 + edi[3]) = esi_7
int32_t eax_34 = edi[3] + 4
edi[3] = eax_34
int32_t esi_8 = *(ebx + 0x4a8d8)
sub_5979b0(edi, eax_34 + 4)
int32_t* ecx_18 = *edi

if (ecx_18 == edi[1])
    ecx_18 = nullptr

*(ecx_18 + edi[3]) = esi_8
int32_t eax_38 = edi[3] + 4
edi[3] = eax_38
int32_t esi_9 = *(ebx + 0x4a8dc)
int32_t ebx_4 = *(ebx + 0x4a8e0)
sub_5979b0(edi, eax_38 + 8)
int32_t* ecx_20 = *edi

if (ecx_20 == edi[1])
    ecx_20 = nullptr

int32_t eax_40 = edi[3]
*(ecx_20 + eax_40) = esi_9
*(ecx_20 + eax_40 + 4) = ebx_4
int32_t eax_42 = edi[3] + 8
edi[3] = eax_42
int32_t esi_10 = *(ebx + 0x4a900)
sub_5979b0(edi, eax_42 + 4)
int32_t* ecx_22 = *edi

if (ecx_22 == edi[1])
    ecx_22 = nullptr

*(ecx_22 + edi[3]) = esi_10
int32_t eax_46 = edi[3] + 4
edi[3] = eax_46
int32_t esi_11 = *(ebx + 0x4a904)
int32_t ebx_6 = *(ebx + 0x4a908)
sub_5979b0(edi, eax_46 + 8)
int32_t* ecx_24 = *edi

if (ecx_24 == edi[1])
    ecx_24 = nullptr

int32_t eax_48 = edi[3]
*(ecx_24 + eax_48) = esi_11
*(ecx_24 + eax_48 + 4) = ebx_6
int32_t eax_50 = edi[3] + 8
edi[3] = eax_50
ebx_6.b = *(ebx + 0x4a90c)
sub_5979b0(edi, eax_50 + 1)
char* ecx_26 = *edi

if (ecx_26 == edi[1])
    ecx_26 = nullptr

ecx_26[edi[3]] = ebx_6.b
int32_t eax_54 = edi[3] + 1
edi[3] = eax_54
int32_t esi_13 = *(ebx + 0x4a910)
int32_t ebx_7 = *(ebx + 0x4a914)
sub_5979b0(edi, eax_54 + 8)
int32_t* ecx_29 = *edi

if (ecx_29 == edi[1])
    ecx_29 = nullptr

int32_t eax_56 = edi[3]
*(ecx_29 + eax_56) = esi_13
*(ecx_29 + eax_56 + 4) = ebx_7
int32_t eax_58 = edi[3] + 8
edi[3] = eax_58
int32_t esi_14 = *(ebx + 0x4a918)
sub_5979b0(edi, eax_58 + 4)
int32_t* ecx_31 = *edi
arg1 = 0x20

if (ecx_31 == edi[1])
    ecx_31 = nullptr

*(ecx_31 + edi[3]) = esi_14
edi[3] += 4
void* ebx_9 = ebx + 0x4a91c
int32_t ecx_32 = edi[3]
int16_t* i

do
    int32_t esi_15 = *ebx_9
    sub_5979b0(edi, ecx_32 + 4)
    int32_t* ecx_34 = *edi
    ebx_9 += 4
    
    if (ecx_34 == edi[1])
        ecx_34 = nullptr
    
    *(ecx_34 + edi[3]) = esi_15
    edi[3] += 4
    i = arg1
    arg1 -= 1
    ecx_32 = edi[3]
while (i != 1)
void* ebx_10
ebx_10.b = *(ebx + 0x4a99c)
sub_5979b0(edi, ecx_32 + 1)
char* ecx_36 = *edi

if (ecx_36 == edi[1])
    ecx_36 = nullptr

ecx_36[edi[3]] = ebx_10.b
edi[3] += 1
void* i_1 = nullptr
int32_t ecx_37 = edi[3]
arg1 = nullptr

do
    ebx_10.b = *(ebx + i_1 + 0x4a99d)
    sub_5979b0(edi, ecx_37 + 1)
    char* ecx_39 = *edi
    
    if (ecx_39 == edi[1])
        ecx_39 = nullptr
    
    ecx_39[edi[3]] = ebx_10.b
    edi[3] += 1
    i_1 = arg1 + 1
    ecx_37 = edi[3]
    arg1 = i_1
while (i_1 s< 0x20)

int32_t esi_17 = *(ebx + 0x4a9c0)
sub_5979b0(edi, ecx_37 + 4)
int32_t* ecx_41 = *edi

if (ecx_41 == edi[1])
    ecx_41 = nullptr

*(ecx_41 + edi[3]) = esi_17
int32_t eax_72 = edi[3] + 4
edi[3] = eax_72
void* ebx_11
ebx_11.b = *(ebx + 0x4a9c4)
sub_5979b0(edi, eax_72 + 1)
char* ecx_43 = *edi

if (ecx_43 == edi[1])
    ecx_43 = nullptr

ecx_43[edi[3]] = ebx_11.b
int32_t eax_76 = edi[3] + 1
edi[3] = eax_76
int32_t esi_18 = *(ebx + 0x4a9c5)
sub_5979b0(edi, eax_76 + 4)
int32_t* ecx_45 = *edi

if (ecx_45 == edi[1])
    ecx_45 = nullptr

*(ecx_45 + edi[3]) = esi_18
int32_t eax_80 = edi[3] + 4
edi[3] = eax_80
void* ebx_12
ebx_12.b = *(ebx + 0x4a9c9)
sub_5979b0(edi, eax_80 + 1)
char* ecx_47 = *edi

if (ecx_47 == edi[1])
    ecx_47 = nullptr

int32_t var_24 = 7
void* var_28 = nullptr
ecx_47[edi[3]] = ebx_12.b
edi[3] += 1
int16_t var_38 = 0
sub_52e3c0(&var_38, ebx + 0x4a9cc, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5979b0(edi, edi[3] + 4)
int32_t* ecx_50 = *edi

if (ecx_50 == edi[1])
    ecx_50 = nullptr

*(ecx_50 + edi[3]) = var_28
int16_t* edx = &var_38
edi[3] += 4
int32_t ecx_51 = var_24
void* esi_20 = var_28 * 2
int16_t* eax_88 = var_38.d

if (ecx_51 u>= 8)
    edx = eax_88

if (esi_20 s> 0)
    sub_5979b0(edi, edi[3] + esi_20)
    int32_t ecx_53 = *edi
    
    if (ecx_53 == edi[1])
        ecx_53 = 0
    
    sub_748840(edi[3] + ecx_53, edx, esi_20, eax_2)
    ecx_51 = var_24
    edi[3] += esi_20
    eax_88 = var_38.d

int32_t var_8_2 = 0xffffffff

if (ecx_51 u>= 8)
    j__free(eax_88)

int32_t esi_21 = *(ebx + 0x4a9e8)
sub_5979b0(edi, edi[3] + 4)
int32_t* ecx_55 = *edi

if (ecx_55 == edi[1])
    ecx_55 = nullptr

*(ecx_55 + edi[3]) = esi_21
int32_t eax_97 = edi[3] + 4
edi[3] = eax_97
void* ebx_13
ebx_13.b = *(ebx + 0x4a9e4)
sub_5979b0(edi, eax_97 + 1)
char* ecx_57 = *edi

if (ecx_57 == edi[1])
    ecx_57 = nullptr

ecx_57[edi[3]] = ebx_13.b
int32_t eax_101 = edi[3] + 1
edi[3] = eax_101
int32_t esi_22 = *(ebx + 0x4a9ec)
sub_5979b0(edi, eax_101 + 4)
int32_t* ecx_59 = *edi

if (ecx_59 == edi[1])
    ecx_59 = nullptr

*(ecx_59 + edi[3]) = esi_22
int32_t eax_105 = edi[3] + 4
edi[3] = eax_105
void* ebx_14
ebx_14.b = *(ebx + 0x4a9f0)
sub_5979b0(edi, eax_105 + 1)
char* ecx_61 = *edi

if (ecx_61 == edi[1])
    ecx_61 = nullptr

ecx_61[edi[3]] = ebx_14.b
int32_t eax_109 = edi[3] + 1
edi[3] = eax_109
ebx_14.b = *(ebx + 0x4a9f1)
sub_5979b0(edi, eax_109 + 1)
char* ecx_63 = *edi

if (ecx_63 == edi[1])
    ecx_63 = nullptr

ecx_63[edi[3]] = ebx_14.b
int32_t eax_113 = edi[3] + 1
edi[3] = eax_113
int32_t esi_24 = *(ebx + 0x4a9f4)
sub_5979b0(edi, eax_113 + 4)
int32_t* ecx_65 = *edi

if (ecx_65 == edi[1])
    ecx_65 = nullptr

*(ecx_65 + edi[3]) = esi_24
int32_t eax_117 = edi[3] + 4
edi[3] = eax_117
int32_t esi_25 = *(ebx + 0x4a9f8)
sub_5979b0(edi, eax_117 + 4)
int32_t* ecx_67 = *edi

if (ecx_67 == edi[1])
    ecx_67 = nullptr

*(ecx_67 + edi[3]) = esi_25
int32_t eax_121 = edi[3] + 4
edi[3] = eax_121
void* ebx_15
ebx_15.b = *(ebx + 0x4a9fc)
sub_5979b0(edi, eax_121 + 1)
char* ecx_69 = *edi

if (ecx_69 == edi[1])
    ecx_69 = nullptr

ecx_69[edi[3]] = ebx_15.b
int32_t eax_125 = edi[3] + 1
edi[3] = eax_125
int32_t esi_27 = *(ebx + 0x4aa00)
sub_5979b0(edi, eax_125 + 4)
int32_t* ecx_71 = *edi

if (ecx_71 == edi[1])
    ecx_71 = nullptr

*(ecx_71 + edi[3]) = esi_27
int32_t eax_129 = edi[3] + 4
edi[3] = eax_129
ebx_15.b = *(ebx + 0x4aa04)
sub_5979b0(edi, eax_129 + 1)
char* ecx_73 = *edi

if (ecx_73 == edi[1])
    ecx_73 = nullptr

ecx_73[edi[3]] = ebx_15.b
int32_t eax_133 = edi[3] + 1
edi[3] = eax_133
ebx_15.b = *(ebx + 0x4aa05)
sub_5979b0(edi, eax_133 + 1)
char* ecx_75 = *edi

if (ecx_75 == edi[1])
    ecx_75 = nullptr

ecx_75[edi[3]] = ebx_15.b
int32_t eax_137 = edi[3] + 1
edi[3] = eax_137
ebx_15.b = *(ebx + 0x4aa06)
sub_5979b0(edi, eax_137 + 1)
char* ecx_77 = *edi

if (ecx_77 == edi[1])
    ecx_77 = nullptr

ecx_77[edi[3]] = ebx_15.b
int32_t eax_141 = edi[3] + 1
edi[3] = eax_141
int32_t esi_29 = *(ebx + 0x4aa08)
sub_5979b0(edi, eax_141 + 4)
int32_t* ecx_79 = *edi

if (ecx_79 == edi[1])
    ecx_79 = nullptr

*(ecx_79 + edi[3]) = esi_29
int32_t eax_145 = edi[3] + 4
edi[3] = eax_145
int32_t esi_30 = *(ebx + 0x4aa0c)
sub_5979b0(edi, eax_145 + 4)
int32_t* ecx_81 = *edi

if (ecx_81 == edi[1])
    ecx_81 = nullptr

*(ecx_81 + edi[3]) = esi_30
int32_t eax_149 = edi[3] + 4
edi[3] = eax_149
int32_t esi_33 = (*(ebx + 0x4aa14) - *(ebx + 0x4aa10)) s>> 3
sub_5979b0(edi, eax_149 + 4)
int32_t* ecx_83 = *edi

if (ecx_83 == edi[1])
    ecx_83 = nullptr

*(ecx_83 + edi[3]) = esi_33
edi[3] += 4
int16_t* eax_152 = *(ebx + 0x4aa10)

if (eax_152 == *(ebx + 0x4aa14))
    eax_152 = nullptr

void* esi_36 = (*(ebx + 0x4aa14) - *(ebx + 0x4aa10)) & 0xfffffff8

if (esi_36 s> 0)
    sub_5979b0(edi, esi_36 + edi[3])
    int32_t ecx_86 = *edi
    
    if (ecx_86 == edi[1])
        ecx_86 = 0
    
    sub_748840(edi[3] + ecx_86, eax_152, esi_36, eax_2)
    edi[3] += esi_36

void* ebx_16
ebx_16.b = *(ebx + 0x4aa1c)
sub_5979b0(edi, edi[3] + 1)
char* ecx_88 = *edi

if (ecx_88 == edi[1])
    ecx_88 = nullptr

ecx_88[edi[3]] = ebx_16.b
void* ebx_17 = ebx
int32_t eax_160 = edi[3] + 1
edi[3] = eax_160
int32_t esi_38 = *(ebx_17 + 0x4aa24) - *(ebx_17 + 0x4aa20)
sub_5979b0(edi, eax_160 + 4)
int32_t* ecx_90 = *edi

if (ecx_90 == edi[1])
    ecx_90 = nullptr

*(ecx_90 + edi[3]) = esi_38
char* i_2 = nullptr
edi[3] += 4

if (*(ebx_17 + 0x4aa24) - *(ebx_17 + 0x4aa20) s> 0)
    do
        ebx_17.b = i_2[*(ebx_17 + 0x4aa20)]
        sub_5979b0(edi, edi[3] + 1)
        char* ecx_92 = *edi
        
        if (ecx_92 == edi[1])
            ecx_92 = nullptr
        
        i_2 = &i_2[1]
        ecx_92[edi[3]] = ebx_17.b
        ebx_17 = ebx
        edi[3] += 1
    while (i_2 s< *(ebx_17 + 0x4aa24) - *(ebx_17 + 0x4aa20))

int32_t esi_40 = *(ebx_17 + 0x4aa30) - *(ebx_17 + 0x4aa2c)
sub_5979b0(edi, edi[3] + 4)
int32_t* ecx_94 = *edi

if (ecx_94 == edi[1])
    ecx_94 = nullptr

*(ecx_94 + edi[3]) = esi_40
char* i_3 = nullptr
edi[3] += 4

if (*(ebx_17 + 0x4aa30) - *(ebx_17 + 0x4aa2c) s> 0)
    do
        ebx_17.b = i_3[*(ebx_17 + 0x4aa2c)]
        sub_5979b0(edi, edi[3] + 1)
        char* ecx_96 = *edi
        
        if (ecx_96 == edi[1])
            ecx_96 = nullptr
        
        i_3 = &i_3[1]
        ecx_96[edi[3]] = ebx_17.b
        ebx_17 = ebx
        edi[3] += 1
    while (i_3 s< *(ebx_17 + 0x4aa30) - *(ebx_17 + 0x4aa2c))

int32_t esi_43 = (*(ebx_17 + 0x4aa3c) - *(ebx_17 + 0x4aa38)) s>> 2
sub_5979b0(edi, edi[3] + 4)
int32_t* ecx_98 = *edi

if (ecx_98 == edi[1])
    ecx_98 = nullptr

*(ecx_98 + edi[3]) = esi_43
void* i_4 = nullptr
edi[3] += 4
int32_t edx_1 = edi[3]
arg1 = nullptr

if (((*(ebx_17 + 0x4aa3c) - *(ebx_17 + 0x4aa38)) & 0xfffffffc) s> 0)
    do
        int32_t esi_44 = *(*(ebx_17 + 0x4aa38) + (i_4 << 2))
        sub_5979b0(edi, edx_1 + 4)
        int32_t* ecx_100 = *edi
        
        if (ecx_100 == edi[1])
            ecx_100 = nullptr
        
        *(ecx_100 + edi[3]) = esi_44
        edi[3] += 4
        i_4 = arg1 + 1
        edx_1 = edi[3]
        arg1 = i_4
    while (i_4 s< (*(ebx_17 + 0x4aa3c) - *(ebx_17 + 0x4aa38)) s>> 2)

ebx_17.b = *(ebx_17 + 0x4aa44)
sub_5979b0(edi, edx_1 + 1)
char* ecx_103 = *edi

if (ecx_103 == edi[1])
    ecx_103 = nullptr

ecx_103[edi[3]] = ebx_17.b
int32_t eax_196 = edi[3] + 1
edi[3] = eax_196
ebx_17.b = *(ebx + 0x4aa45)
sub_5979b0(edi, eax_196 + 1)
char* ecx_105 = *edi

if (ecx_105 == edi[1])
    ecx_105 = nullptr

ecx_105[edi[3]] = ebx_17.b
int32_t eax_200 = edi[3] + 1
edi[3] = eax_200
ebx_17.b = *(ebx + 0x4aa46)
sub_5979b0(edi, eax_200 + 1)
char* ecx_107 = *edi

if (ecx_107 == edi[1])
    ecx_107 = nullptr

ecx_107[edi[3]] = ebx_17.b
int32_t eax_204 = edi[3] + 1
edi[3] = eax_204
ebx_17.b = *(ebx + 0x4aa47)
sub_5979b0(edi, eax_204 + 1)
char* ecx_109 = *edi

if (ecx_109 == edi[1])
    ecx_109 = nullptr

ecx_109[edi[3]] = ebx_17.b
int32_t eax_208 = edi[3] + 1
edi[3] = eax_208
ebx_17.b = *(ebx + 0x4aa48)
sub_5979b0(edi, eax_208 + 1)
char* ecx_111 = *edi

if (ecx_111 == edi[1])
    ecx_111 = nullptr

ecx_111[edi[3]] = ebx_17.b
int32_t eax_212 = edi[3] + 1
edi[3] = eax_212
ebx_17.b = *(ebx + 0x4aa49)
sub_5979b0(edi, eax_212 + 1)
char* ecx_113 = *edi

if (ecx_113 == edi[1])
    ecx_113 = nullptr

ecx_113[edi[3]] = ebx_17.b
int32_t eax_216 = edi[3] + 1
edi[3] = eax_216
ebx_17.b = *(ebx + 0x4aa4a)
sub_5979b0(edi, eax_216 + 1)
char* ecx_115 = *edi

if (ecx_115 == edi[1])
    ecx_115 = nullptr

ecx_115[edi[3]] = ebx_17.b
int32_t eax_220 = edi[3] + 1
edi[3] = eax_220
ebx_17.b = *(ebx + 0x4aa4b)
sub_5979b0(edi, eax_220 + 1)
char* ecx_117 = *edi

if (ecx_117 == edi[1])
    ecx_117 = nullptr

ecx_117[edi[3]] = ebx_17.b
int32_t eax_224 = edi[3] + 1
edi[3] = eax_224
ebx_17.b = *(ebx + 0x4aa4c)
sub_5979b0(edi, eax_224 + 1)
char* ecx_119 = *edi

if (ecx_119 == edi[1])
    ecx_119 = nullptr

int32_t var_24_1 = 7
void* var_28_1 = nullptr
ecx_119[edi[3]] = ebx_17.b
edi[3] += 1
var_38 = 0
sub_52e3c0(&var_38, ebx + 0x4aa50, 0, 0xffffffff)
int32_t var_8_3 = 1
sub_5979b0(edi, edi[3] + 4)
int32_t* ecx_122 = *edi
int16_t* ebx_18 = &var_38

if (ecx_122 == edi[1])
    ecx_122 = nullptr

*(ecx_122 + edi[3]) = var_28_1
edi[3] += 4
int32_t ecx_123 = var_24_1
void* esi_47 = var_28_1 * 2
int16_t* eax_232 = var_38.d

if (ecx_123 u>= 8)
    ebx_18 = eax_232

if (esi_47 s> 0)
    sub_5979b0(edi, esi_47 + edi[3])
    int32_t ecx_125 = *edi
    
    if (ecx_125 == edi[1])
        ecx_125 = 0
    
    sub_748840(edi[3] + ecx_125, ebx_18, esi_47, eax_2)
    ecx_123 = var_24_1
    edi[3] += esi_47
    eax_232 = var_38.d

int32_t var_8_4 = 0xffffffff

if (ecx_123 u>= 8)
    j__free(eax_232)

int32_t var_24_2 = 7
var_38 = 0
void* const var_28_2 = nullptr
sub_52e3c0(&var_38, ebx + 0x4aa68, 0, 0xffffffff)
int32_t var_8_5 = 2
sub_5979b0(edi, edi[3] + 4)
void** ecx_128 = *edi
int16_t* edx_3 = &var_38

if (ecx_128 == edi[1])
    ecx_128 = nullptr

*(ecx_128 + edi[3]) = var_28_2
edi[3] += 4
int32_t ecx_129 = var_24_2
void* esi_49 = var_28_2 * 2
int16_t* eax_241 = var_38.d

if (ecx_129 u>= 8)
    edx_3 = eax_241

if (esi_49 s> 0)
    sub_5979b0(edi, edi[3] + esi_49)
    int32_t ecx_131 = *edi
    
    if (ecx_131 == edi[1])
        ecx_131 = 0
    
    sub_748840(edi[3] + ecx_131, edx_3, esi_49, eax_2)
    ecx_129 = var_24_2
    edi[3] += esi_49
    eax_241 = var_38.d

int32_t var_8_6 = 0xffffffff

if (ecx_129 u>= 8)
    j__free(eax_241)

int32_t var_24_3 = 7
var_38 = 0
void* const var_28_3 = nullptr
sub_52e3c0(&var_38, ebx + 0x4aa80, 0, 0xffffffff)
int32_t var_8_7 = 3
sub_5979b0(edi, edi[3] + 4)
void** ecx_134 = *edi
int16_t* edx_4 = &var_38

if (ecx_134 == edi[1])
    ecx_134 = nullptr

*(ecx_134 + edi[3]) = var_28_3
edi[3] += 4
int32_t ecx_135 = var_24_3
void* esi_51 = var_28_3 * 2
int16_t* eax_251 = var_38.d

if (ecx_135 u>= 8)
    edx_4 = eax_251

if (esi_51 s> 0)
    sub_5979b0(edi, edi[3] + esi_51)
    int32_t ecx_137 = *edi
    
    if (ecx_137 == edi[1])
        ecx_137 = 0
    
    sub_748840(edi[3] + ecx_137, edx_4, esi_51, eax_2)
    ecx_135 = var_24_3
    edi[3] += esi_51
    eax_251 = var_38.d

int32_t var_8_8 = 0xffffffff

if (ecx_135 u>= 8)
    j__free(eax_251)

int32_t var_3c = 7
int16_t var_50 = 0
int32_t var_40 = 0
sub_52e3c0(&var_50, ebx + 0x4aa98, 0, 0xffffffff)
int32_t var_8_9 = 4
sub_5b0590(edi, &var_50)

if (var_3c u>= 8)
    j__free(var_50.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
