// 函数: sub_541320
// 地址: 0x541320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_85c
void* eax_2 = &var_85c
int32_t i_4 = 0x11
int32_t i

do
    *(eax_2 - 4) = 0
    eax_2 += 0x64
    *(eax_2 - 0x64) = 0
    *(eax_2 - 0x54) = 0
    *(eax_2 - 0x50) = 0
    *(eax_2 - 0x40) = 0
    *(eax_2 - 0x3c) = 0
    *(eax_2 - 0x2c) = 0
    *(eax_2 - 0x28) = 0
    *(eax_2 - 0x18) = 0
    *(eax_2 - 0x14) = 0
    i = i_4
    i_4 -= 1
while (i != 1)
void* edi = arg2 + 0x20
sub_4ef190(eax_2, edi, *(arg2 + 0x20), "S@", &data_1b8a720)
int32_t i_1 = 0
int32_t i_3 = 0
int32_t i_5 = 0x10
void var_864
int32_t var_1bc[0x24]
int32_t var_12c[0x12]
int32_t var_e4[0x12]
int32_t var_9c[0x12]

if (data_1b8c884 s> 0)
    do
        char* eax_3 = *edi
        
        if (i_1 s< 0x10)
            i_5 = i_1
        
        while (*eax_3 == 0xa)
            eax_3 = &eax_3[3]
            *edi = eax_3
        
        *edi += 1
        char* ecx_3 = *edi
        uint32_t eax_4 = zx.d(*ecx_3)
        *edi = &ecx_3[1]
        var_12c[i_5] = 0
        var_e4[i_5] = 0x3fff
        var_9c[i_5] = 0xffffc001
        
        if (eax_4 == 0)
            uint32_t eax_15 = i_5 * 0x64 + &var_864
            sub_4ef190(eax_15, edi, &ecx_3[1], "S%", eax_15)
            i_1 = i_3
        else
            void var_83c
            
            if (eax_4 == 1)
                int32_t esi_2 = i_5 * 0x64
                uint32_t eax_12 = &var_864 + esi_2
                sub_4ef190(eax_12, edi, &ecx_3[1], "S%$", eax_12)
                var_12c[i_5] = *(&var_83c + esi_2)
                i_1 = i_3
            else if (eax_4 == 2)
                int32_t esi_1 = i_5 * 0x64
                uint32_t eax_8 = &var_864 + esi_1
                sub_4ef190(eax_8, edi, &ecx_3[1], "S%$$$", eax_8)
                var_12c[i_5] = *(&var_83c + esi_1)
                void var_828
                var_9c[i_5] = *(&var_828 + esi_1)
                void var_814
                var_e4[i_5] = *(&var_814 + esi_1)
                i_1 = i_3
        
        var_1bc[i_5] = *(&var_85c + i_5 * 0x64)
        char* eax_18 = *edi
        
        while (true)
            char* ecx_1
            ecx_1.b = *eax_18
            
            if (ecx_1.b != 0x2c && ecx_1.b != 0x20)
                break
            
            eax_18 = &eax_18[1]
        
        i_1 += 1
        *edi = eax_18
        i_5 = 0x10
        i_3 = i_1
    while (i_1 s< data_1b8c884)

char* eax_19 = *edi

while (*eax_19 == 0xa)
    eax_19 = &eax_19[3]
    *edi = eax_19

*edi += 1

if (data_1b8c884 s< 0x10)
    i_5 = data_1b8c884

if (data_702fc0 != 0)
    int32_t var_54[0x13]
    
    if (i_5 s> 0)
        data_20c1684 = data_1b8a728
        data_20c1688 = &var_1bc
        data_20c1690 = &var_12c
        HWND hWndParent = data_7027bc
        data_20c1694 = &var_54
        HINSTANCE hInstance = data_134cebc
        data_20c1698 = &var_9c
        data_20c168c = i_5
        data_20c169c = &var_e4
        DialogBoxParamA(hInstance, 0x12c, hWndParent, sub_5445d0, 0)
    
    int32_t esi_3 = 0
    
    if (i_5 s> 0)
        void var_844
        void* edi_1 = &var_844
        
        do
            int32_t ecx_5 = var_54[esi_3]
            int32_t eax_21 = var_9c[esi_3]
            
            if (ecx_5 s< eax_21)
                var_54[esi_3] = eax_21
            else
                eax_21 = var_e4[esi_3]
                
                if (ecx_5 s> eax_21)
                    var_54[esi_3] = eax_21
            
            sub_4e8000(eax_21, *(edi_1 + 4), *edi_1, var_54[esi_3], &data_704898)
            esi_3 += 1
            edi_1 += 0x64
        while (esi_3 s< i_5)

void* esi_4 = &var_864
int32_t i_6 = 0x11
int32_t result
int32_t i_2

do
    result = sub_4eef40(esi_4, 5)
    esi_4 += 0x64
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
