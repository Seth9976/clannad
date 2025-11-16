// 函数: sub_4d9fb2
// 地址: 0x4d9fb2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_10 = 0xffffffff
uint32_t esi = zx.d(*(arg1 + 2))
int32_t edi
int32_t var_20 = edi
int32_t i_1 = 0
int32_t edx = 7
int32_t var_c = 4

if (esi == 0)
    edx = 0x8a
    var_c = 3

if (arg3 s< 0)
    return 

void* var_8_1 = arg1 + 6
int32_t ecx_1 = var_c
int32_t var_14_1 = arg3 + 1

while (true)
    uint32_t edi_4 = zx.d(*var_8_1)
    i_1 += 1
    
    if (i_1 s>= edx || esi != edi_4)
        if (i_1 s>= ecx_1)
            int32_t var_24_1
            int32_t edx_4
            
            if (esi != 0)
                if (esi != var_10)
                    sub_4d984c(arg2, zx.d(*(arg2 + (esi << 2) + 0xf98)), 
                        zx.d(*(arg2 + (esi << 2) + 0xf9a)))
                    i_1 -= 1
                
                sub_4d984c(arg2, zx.d(*(arg2 + 0xfd8)), zx.d(*(arg2 + 0xfda)))
                edx_4 = i_1 - 3
                var_24_1 = 2
            else if (i_1 s> 0xa)
                sub_4d984c(arg2, zx.d(*(arg2 + 0xfe0)), zx.d(*(arg2 + 0xfe2)))
                edx_4 = i_1 - 0xb
                var_24_1 = 7
            else
                sub_4d984c(arg2, zx.d(*(arg2 + 0xfdc)), zx.d(*(arg2 + 0xfde)))
                edx_4 = i_1 - 3
                var_24_1 = 3
            
            sub_4d984c(arg2, edx_4, var_24_1)
        else
            int32_t i
            
            do
                sub_4d984c(arg2, zx.d(*(arg2 + (esi << 2) + 0xf98)), 
                    zx.d(*(arg2 + (esi << 2) + 0xf9a)))
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        i_1 = 0
        var_10 = esi
        int32_t var_24_2
        
        if (edi_4 == 0)
            edx = 0x8a
            var_24_2 = 3
        else if (esi != edi_4)
            edx = 7
            var_24_2 = 4
        else
            edx = 6
            var_24_2 = 3
        
        ecx_1 = var_24_2
    
    var_8_1 += 4
    int32_t temp2_1 = var_14_1
    var_14_1 -= 1
    
    if (temp2_1 == 1)
        break
    
    esi = edi_4
