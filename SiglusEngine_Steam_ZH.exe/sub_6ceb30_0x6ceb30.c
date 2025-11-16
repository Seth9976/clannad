// 函数: sub_6ceb30
// 地址: 0x6ceb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* ebx = arg3

if (ebx == 0 || arg2 == 0)
    return 

void* edi_1 = arg5

if (arg4 != 0)
    sub_6cafa0(arg1, arg2, arg3, 0x2000, 0)
    arg1 = sub_6d8320(ebx, 0x100)
    *(arg2 + 0x9c) = arg1
    *(ebx + 0x1ac) = arg1
    
    if (edi_1 - 1 u<= 0xff)
        arg1, arg3 = sub_748840(arg1, arg4, edi_1)

if (arg6 != 0)
    arg3.b = *(arg2 + 0x18)
    
    if (arg3.b u< 0x10)
        int32_t edx = 1 << arg3.b
        arg3.b = *(arg2 + 0x19)
        
        if (arg3.b == 0 && zx.d(arg6[1].w) s> edx - 1)
            sub_6d4470(ebx, "tRNS chunk has out-of-range samples for bit_depth")
        else if (arg3.b == 2 && (zx.d(*(arg6 + 2)) s> edx - 1 || zx.d(*(arg6 + 4)) s> edx - 1
                || zx.d(*(arg6 + 6)) s> edx - 1))
            sub_6d4470(ebx, "tRNS chunk has out-of-range samples for bit_depth")
    
    uint32_t eax
    eax.w = arg6[1].w
    *(arg2 + 0xa0) = *arg6
    *(arg2 + 0xa8) = eax.w
    
    if (edi_1 == 0)
        edi_1 = 1

*(arg2 + 0x16) = edi_1.w

if (edi_1 != 0)
    *(arg2 + 8) |= 0x10
    *(arg2 + 0xe8) |= 0x2000
