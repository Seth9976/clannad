// 函数: sub_4e30d3
// 地址: 0x4e30d3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1
uint32_t var_c_1 = 0xffffffff
int32_t edi
int32_t var_18 = edi
uint32_t ecx = zx.d(*(arg2 + 2))
int32_t edx = 7
int32_t ebx = 0
int32_t edi_1 = 4

if (ecx == 0)
    edx = 0x8a
    edi_1 = 3

*(arg2 + (arg1 << 2) + 6) = 0xffff

if (arg1 s< 0)
    return 

void* var_8_1 = arg2 + 6
int32_t i_1 = arg1 + 1
int32_t i

do
    arg2 = ecx
    ecx = zx.d(*var_8_1)
    ebx += 1
    
    if (ebx s>= edx || arg2 != ecx)
        if (ebx s< edi_1)
            *(arg3 + (arg2 << 2) + 0xa74) += ebx.w
        else if (arg2 != 0)
            if (arg2 != var_c_1)
                *(arg3 + (arg2 << 2) + 0xa74) += 1
            
            *(arg3 + 0xab4) += 1
        else if (ebx s> 0xa)
            *(arg3 + 0xabc) += 1
        else
            *(arg3 + 0xab8) += 1
        
        ebx = 0
        var_c_1 = arg2
        int32_t var_1c_1
        
        if (ecx == 0)
            edx = 0x8a
            var_1c_1 = 3
        else if (arg2 != ecx)
            edx = 7
            var_1c_1 = 4
        else
            edx = 6
            var_1c_1 = 3
        
        edi_1 = var_1c_1
    
    var_8_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
