// 函数: sub_5806b0
// 地址: 0x5806b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg2
arg2:1.b = arg3
void* edi = arg4
arg2.b = *(edi + 0x3888)
*(eax_2 * 0x3e8 + data_1af4e90 + 0x1af4e98) = arg2.b
int32_t ecx_1 = arg6[1]
void* var_114 = edi

if (ecx_1 != 0)
    int32_t eax_4 = data_1af4e90
    
    if (eax_4 u<= 0x3e7)
        int32_t* ecx_2 = ecx_1 + (eax_4 << 3)
        
        if (ecx_2[1] != 0)
            if (*ecx_2 == 0)
                char* ecx_3 = data_1b144a0:0xc
                
                if (ecx_3 != 0)
                    ecx_3[eax_4] = 0
                
                ecx_2[1] = 0
            else
                sub_4d6c40(ecx_2, &ecx_2[1])
        
        arg2:1.b = arg2:1.b

void* var_130 = edi + 0x3884

if (*(edi + 0x3884) == 0 && (*(edi + 0x380c) == 0 || *(edi + 0x3804) != 0))
label_58076e:
    void* eax_5
    eax_5.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_5

if (arg2:1.b == 0 && (data_7037e0 == 0 || *(arg5 + 0xec) == 0))
    goto label_58076e

if (arg6[1] == 0)
    int32_t* var_144_1 = eax_2
    char var_108[0x100]
    sub_4c84d0(&var_108, "WIN%03d_MSGBK_HANDLE_BUF")
    sub_4d6960(&var_108, &arg6[1], arg6, 0x1f40, &var_108)

void* eax_8 = arg6[1] + (data_1af4e90 << 3)
int32_t eax_9

if (*(edi + 0x3864) == 0)
    eax_9 = 0
else
    eax_9 = *(edi + 0x3868)

char* ecx_8 = *(edi + 0x3874)
int32_t eax_10 = eax_9 << 5
void* const eax_11

if (ecx_8 == 0)
    eax_11 = nullptr
else
    eax_11 = sub_4cfc80(ecx_8)

void* eax_12 = eax_11 + eax_10 + 0x50
int32_t esi_3 = 0
char* eax_13 = *(edi + 0x3880)
char var_109_1 = 0
int32_t eax_14

if (eax_13 != 0)
    int32_t i_3 = 8
    char* edi_1 = eax_13
    int32_t i
    
    do
        esi_3 += sub_4cfc80(edi_1)
        
        if (*edi_1 == 0)
            eax_14.b = var_109_1
        else
            eax_14.b = 1
            esi_3 += 0x1c
            var_109_1 = 1
        
        edi_1 = &edi_1[0x40]
        i = i_3
        i_3 -= 1
    while (i != 1)
    edi = var_114

if (eax_13 == 0 || eax_14.b == 0)
    esi_3 = 0

uint32_t eax_16 = eax_12 + esi_3
sub_461120(eax_16, data_1af4e90, arg6, eax_16)
int32_t* edx_3 = *(eax_8 + 4)
int32_t* var_110_1 = edx_3
edx_3[1] = eax_9
*edx_3 = 0

if (eax_10 s> 0)
    *edx_3 = &edx_3[0x14]
    sub_4d1c30(eax_10, *(edi + 0x3864), &edx_3[0x14], eax_10)
    edx_3 = var_110_1

edx_3[2] = 0
edx_3[3].b = 0

if (eax_11 s> 0)
    void* ecx_14 = eax_10 + 0x50 + edx_3
    edx_3[2] = ecx_14
    sub_4d1c30(eax_11, *(edi + 0x3874), ecx_14, eax_11)
    edx_3 = var_110_1
    void* const eax_19
    eax_19.b = *(edi + 0x3878)
    edx_3[3].b = eax_19.b

edx_3[4] = 0

if (esi_3 s> 0)
    void* edi_3 = eax_12 + edx_3
    int32_t i_2 = 8
    edx_3[4] = edi_3
    char* esi_5 = *(var_114 + 0x3880)
    int32_t i_1
    
    do
        void* edx_6 = nullptr
        char* eax_20 = esi_5
        
        if (esi_5 != 0)
            if (*esi_5 != 0)
                do
                    char ecx_11 = *eax_20
                    
                    if (ecx_11 u< 0x80)
                        edx_6 += 1
                        eax_20 = &eax_20[1]
                    else if (ecx_11 u< 0xa0)
                        if (ecx_11 u>= 0xfe)
                            edx_6 += 1
                            eax_20 = &eax_20[1]
                        else
                            edx_6 += 2
                            eax_20 = &eax_20[2]
                    else if (ecx_11 u<= 0xdf || ecx_11 u>= 0xfe)
                        edx_6 += 1
                        eax_20 = &eax_20[1]
                    else
                        edx_6 += 2
                        eax_20 = &eax_20[2]
                while (*eax_20 != 0)
            
            eax_20 = edx_6 + 1
        
        sub_4d1c30(eax_20, esi_5, edi_3, eax_20)
        edi_3 += eax_20
        
        if (eax_20 s> 1)
            sub_4d1c30(eax_20, &esi_5[0x24], edi_3, 0x1c)
            edi_3 += 0x1c
        
        esi_5 = &esi_5[0x40]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    edx_3 = var_110_1

sub_4d1c30(&edx_3[5], var_130, &edx_3[5], 0x3c)
edx_3[5] = 1
void* eax_21
eax_21.b = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_21
