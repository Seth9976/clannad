// 函数: sub_4be650
// 地址: 0x4be650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t i = 0
int32_t result

if (*(arg1 + 0xc) u> 0)
    do
        int32_t eax_1 = *(arg1 + 0x18)
        *(arg1 + 0xfc) = i
        int32_t* eax_2 = *(eax_1 + (i << 2))
        *(arg1 + 0x100) = eax_2
        
        if ((*eax_2 & 0xfff00000) == 0x11000000)
            result = sub_4b4d26(arg1)
            
            if (result s< 0)
                return result
        
        i += 1
    while (i u< *(arg1 + 0xc))

sub_4c8264(arg1)
int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t eax_5 = *(arg1 + 0x18)
        *(arg1 + 0xfc) = i_1
        int32_t* eax_6 = *(eax_5 + (i_1 << 2))
        *(arg1 + 0x100) = eax_6
        
        if ((*eax_6 & 0xfff00000) == 0x11000000)
            result = sub_4b4fae(arg1)
            
            if (result s< 0)
                return result
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

sub_4c8264(arg1)
result = sub_4a4f2f(arg1)

if (result s>= 0)
    result = sub_4ad8ba(arg1)
    
    if (result s>= 0)
        result = sub_49ff18(arg1)
        
        if (result s>= 0)
            result = sub_4a6590(arg1)
            
            if (result s>= 0)
                sub_4c8264(arg1)
                return 0

return result
