// 函数: sub_6b2ad0
// 地址: 0x6b2ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg2)
int32_t ecx_1
int32_t edi_1
edi_1, ecx_1 = __memfill_u32(arg3, zx.d(arg4) * 0x1010101, (eax_3 + (edx & 3)) s>> 2)
int32_t eax_8 = arg2 & 0x80000003

if (eax_8 s< 0)
    eax_8 = ((eax_8 - 1) | 0xfffffffc) + 1

int32_t eax_12

if (eax_8 == 1)
    eax_12.b = arg4
    *(arg3 + arg2 - 1) = eax_12.b
else
    if (eax_8 == 2)
        int32_t eax_11
        eax_11.b = arg4
        *(arg3 + arg2 - 2) = eax_11.b
        *(arg3 + arg2 - 1) = eax_11.b
        return eax_11
    
    eax_12 = eax_8 - 3
    
    if (eax_8 == 3)
        eax_12.b = arg4
        *(arg3 + arg2 - 3) = eax_12.b
        *(arg3 + arg2 - 2) = eax_12.b
        *(arg3 + arg2 - 1) = eax_12.b

return eax_12
