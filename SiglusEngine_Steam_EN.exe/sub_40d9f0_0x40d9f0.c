// 函数: sub_40d9f0
// 地址: 0x40d9f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebp = arg1
int32_t* edi = arg2
int32_t eax = ebp[0xd2]
int32_t var_c = 0
int32_t esi = 0xffffffff
sub_410990(edi, *ebp, 5)
arg2 = nullptr

if (*ebp s> 0)
    void* ebx_1 = &ebp[1]
    bool cond:2_1
    
    do
        sub_410990(edi, *ebx_1, 4)
        int32_t eax_2 = *ebx_1
        
        if (esi s< eax_2)
            esi = eax_2
        
        ebx_1 += 4
        cond:2_1 = arg2 + 1 s< *ebp
        arg2 += 1
    while (cond:2_1)

if (esi + 1 s> 0)
    void* esi_1 = &ebp[0x30]
    arg2 = &ebp[0x50]
    int32_t var_8_1 = esi + 1
    bool cond:4_1
    
    do
        sub_410990(edi, *(esi_1 - 0x40) - 1, 3)
        sub_410990(edi, *esi_1, 2)
        
        if (*esi_1 != 0)
            sub_410990(edi, *(esi_1 + 0x40), 8)
        
        int32_t i = 0
        
        if (1 << (*esi_1).b s> 0)
            void* ebp_1 = arg2
            
            do
                sub_410990(edi, *ebp_1 + 1, 8)
                i += 1
                ebp_1 += 4
            while (i s< 1 << (*esi_1).b)
            
            ebp = arg1
        
        esi_1 += 4
        cond:4_1 = var_8_1 != 1
        arg2 += 0x20
        var_8_1 -= 1
    while (cond:4_1)

sub_410990(edi, ebp[0xd0] - 1, 2)
sub_410990(edi, sub_40b560(eax), 4)
int32_t eax_15 = sub_40b560(eax)
int32_t result = 0
arg2 = nullptr

if (*ebp s> 0)
    arg1 = &ebp[1]
    bool cond:3_1
    
    do
        int32_t ecx_11 = var_c + ebp[*arg1 + 0x20]
        var_c = ecx_11
        
        if (result s< ecx_11)
            void* ebx_2 = &ebp[result + 0xd3]
            int32_t i_2 = ecx_11 - result
            int32_t result_1 = result + i_2
            int32_t i_1
            
            do
                sub_410990(edi, *ebx_2, eax_15)
                ebx_2 += 4
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            result = result_1
        
        cond:3_1 = arg2 + 1 s< *ebp
        arg2 += 1
        arg1 = &arg1[1]
    while (cond:3_1)

return result
