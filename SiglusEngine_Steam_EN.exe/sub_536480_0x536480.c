// 函数: sub_536480
// 地址: 0x536480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = __chkstk(0xa4ec)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void var_a4ac
void* eax_2 = &var_a4ac
int32_t i_4 = 0x101
int32_t i

do
    *(eax_2 - 4) = 0
    eax_2 += 0xa0
    *(eax_2 - 0xa0) = 0
    *(eax_2 - 0x90) = 0
    *(eax_2 - 0x8c) = 0
    *(eax_2 - 0x7c) = 0
    *(eax_2 - 0x78) = 0
    *(eax_2 - 0x68) = 0
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
sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), "$$$@", &data_1b8a720)
int32_t i_1 = 0
int32_t i_5 = 0x100
int32_t i_3 = 0
void var_a4b4
int32_t var_414[0xff]

if (data_1b8c884 s> 0)
    do
        char* eax_3 = *(edx + 0x20)
        
        if (i_1 s< 0x100)
            i_5 = i_1
        
        while (*eax_3 == 0xa)
            eax_3 = &eax_3[3]
            *(edx + 0x20) = eax_3
        
        *(edx + 0x20) += 1
        char* ecx_1 = *(edx + 0x20)
        uint32_t eax_4 = zx.d(*ecx_1)
        var_414[i_5] = eax_4
        *(edx + 0x20) = &ecx_1[1]
        void* eax_10
        
        if (eax_4 == 0)
            eax_10 = i_5 * 0xa0 + &var_a4b4
            sub_4ef190(eax_10, edx + 0x20, &ecx_1[1], "$", eax_10)
            i_1 = i_3
        else if (eax_4 == 1)
            uint32_t eax_11 = &var_a4b4 + i_5 * 0xa0
            sub_4ef190(eax_11, edx + 0x20, &ecx_1[1], "$$$", eax_11)
            int32_t var_a478[0x2819]
            var_a478[i_5 * 0x28] = 0
            i_1 = i_3
        else if (eax_4 == 2)
            eax_10 = i_5 * 0xa0 + &var_a4b4
            sub_4ef190(eax_10, edx + 0x20, &ecx_1[1], "$$$$", eax_10)
            i_1 = i_3
        char* eax_14 = *(edx + 0x20)
        
        while (true)
            char* ecx_2
            ecx_2.b = *eax_14
            
            if (ecx_2.b != 0x2c && ecx_2.b != 0x20)
                break
            
            eax_14 = &eax_14[1]
        
        bool cond:1_1 = data_1bfdd30 != 0x321
        *(edx + 0x20) = eax_14
        
        if (not(cond:1_1))
            int32_t ecx_4 = i_5 * 0xa0
            void var_a4a0
            *(&var_a4a0 + ecx_4) += *(&var_a4b4 + ecx_4)
        
        i_1 += 1
        i_5 = 0x100
        i_3 = i_1
    while (i_1 s< data_1b8c884)

char* eax_16 = *(edx + 0x20)

while (*eax_16 == 0xa)
    eax_16 = &eax_16[3]
    *(edx + 0x20) = eax_16

*(edx + 0x20) += 1
int32_t ecx_5 = 1
int32_t edx_4 = data_1b8a734

if (data_1b8c884 s< 0x100)
    i_5 = data_1b8c884

int32_t esi_3 = data_1b8a748
int32_t var_a4c0 = 0

if (i_5 s> 0)
    int32_t i_7 = i_5
    void* var_a4c8_1 = &var_a4b4
    int32_t eax_17 = 0
    void* ebx_1 = &var_a4b4
    
    do
        if (var_414[eax_17] != 0)
            int32_t eax_19 = *ebx_1 + edx_4
            int32_t ecx_6 = *(ebx_1 + 0x3c)
            int32_t edi_2 = *(ebx_1 + 0x14) + edx_4
            int32_t edx_5 = *(ebx_1 + 0x28)
            int32_t var_a4c4_1 = 0
            int32_t var_a4b8 = eax_19
            
            if (eax_19 s> edi_2)
                ecx_5 = 0
            else if (data_1b8a720 s< edi_2)
                ebx_1 = var_a4c8_1
                
                if (data_1b8a720 s>= eax_19)
                    int32_t edi_3 = edi_2 - eax_19
                    int32_t var_a4b8_2 = data_1b8a720 - eax_19
                    ebx_1 = var_a4c8_1
                    
                    if (var_a4b8_2 s<= 0)
                        if (edi_3 s<= 0)
                            esi_3 = edx_5
                    else if (edi_3 s<= 0)
                        esi_3 = edx_5
                    else
                        if (ecx_6 == 0)
                            ecx_6 = 0
                        else if (ecx_6 == 1)
                            ecx_6 = 3
                        else if (ecx_6 == 2)
                            ecx_6 += 2
                        
                        int32_t var_a4f0
                        
                        if (esi_3 s< edx_5)
                            int32_t edx_6 = edx_5 - esi_3
                            int32_t var_a4d8_1 = data_1392710
                            int32_t var_a4e4_1 = 0
                            var_a4f0 = edx_6
                            int32_t var_a4ec_1 = 0
                            int32_t var_a4cc_1 = 1
                            int32_t var_a4d0_1 = edi_3
                            int32_t var_a4d4_1 = 0
                            int32_t var_a4e0_1 = edx_6
                            int32_t var_a4dc_1 = edx_6
                            
                            if (ecx_6.b != 0xff)
                                if (ecx_6.b != 1)
                                    char var_a4e8_2 = ecx_6.b
                                
                                if (ecx_6.b == 1 || ecx_6.b == 2)
                                    char var_a4e8_3 = 0
                            else
                                int32_t var_a4e0_2 = 0
                                int32_t var_a4dc_2 = 0
                                var_a4f0 = 0
                                char var_a4e8_1 = ecx_6.b
                            
                            sub_4d1fd0(&var_a4f0, var_a4b8_2)
                            esi_3 += var_a4ec_1
                        else if (esi_3 s<= edx_5)
                            esi_3 = edx_5
                        else
                            int32_t var_a4e4_2 = 0
                            int32_t eax_26 = esi_3 - edx_5
                            int32_t var_a4ec_2 = 0
                            int32_t var_a4d8_2 = data_1392710
                            var_a4f0 = eax_26
                            int32_t var_a4cc_2 = 1
                            int32_t var_a4d0_2 = edi_3
                            int32_t var_a4d4_2 = 0
                            int32_t var_a4e0_3 = eax_26
                            int32_t var_a4dc_3 = eax_26
                            
                            if (ecx_6.b != 0xff)
                                if (ecx_6.b != 1)
                                    char var_a4e8_5 = ecx_6.b
                                
                                if (ecx_6.b == 1 || ecx_6.b == 2)
                                    char var_a4e8_6 = 0
                                
                                sub_4d1fd0(&var_a4f0, var_a4b8_2)
                                esi_3 -= var_a4ec_2
                            else
                                char var_a4e8_4 = ecx_6.b
                                int32_t var_a4e0_4 = 0
                                int32_t var_a4dc_4 = 0
                                var_a4f0 = 0
                                sub_4d1fd0(&var_a4f0, var_a4b8_2)
                                esi_3 -= var_a4ec_2
                
                ecx_5 = var_a4c4_1
            else
                esi_3 = edx_5
                ecx_5 = 1
            
            i_7 = i_5
            edx_4 = data_1b8a734
            eax_17 = var_a4c0
        else if (ecx_5 == 1)
            esi_3 = *ebx_1
        
        eax_17 += 1
        ebx_1 += 0xa0
        var_a4c0 = eax_17
        var_a4c8_1 = ebx_1
    while (eax_17 s< i_7)

data_715e98 = esi_3
int32_t i_6 = 0x101
void* esi_4 = &var_a4b4
int32_t result
int32_t i_2

do
    result = sub_4eef40(esi_4, 8)
    esi_4 += 0xa0
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result
