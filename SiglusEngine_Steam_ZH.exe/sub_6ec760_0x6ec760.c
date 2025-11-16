// 函数: sub_6ec760
// 地址: 0x6ec760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1[1]
int32_t edi = arg1[2]
int32_t edx = arg1[3]
int32_t eax_1 = 0
int32_t var_8 = 0

while (true)
    int32_t eax_2 = sx.d(*(arg2 + (eax_1 << 1)))
    int32_t var_10_1 = eax_2
    
    if (eax_2 s> edx)
        int32_t i = 0x20 - edx
        
        do
            if (esi u>= *arg1)
                i = 0xc0000000
                break
            
            i -= 8
            uint32_t eax_4 = zx.d(*esi) << i.b
            esi = &esi[1]
            edi |= eax_4
        while (i u>= 8)
        
        eax_2 = var_10_1
        edx = 0x20 - i
    
    eax_1 = sx.d(*(arg2 + (((edi u>> (0x20 - eax_2.b)) + var_8) << 1) + 2))
    var_8 = eax_1
    
    if (eax_1 s<= 0)
        break
    
    edi <<= var_10_1.b
    edx -= var_10_1

int32_t eax_8 = neg.d(eax_1)
int32_t ecx_5 = eax_8 s>> 8
arg1[2] = edi << ecx_5.b
arg1[1] = esi
arg1[3] = edx - ecx_5
return zx.d(eax_8.b)
