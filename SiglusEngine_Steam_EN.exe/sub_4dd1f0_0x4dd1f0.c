// 函数: sub_4dd1f0
// 地址: 0x4dd1f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

struct IUnknown pUnknown = *(arg1 + 0x38)
*(arg1 + 0x6c) |= 1
OleLockRunning(pUnknown, 1, 0)
void* edi_1

if ((arg2 & 1) == 0)
label_4dd228:
    int32_t* ecx_2 = *(arg1 + 0x38)
    edi_1 = arg1 + 0x48
    *(arg1 + 0x6c) &= 0xfffffff7
    (**ecx_2)(ecx_2, 0x61d3b0, edi_1)
else
    int32_t* ecx_1 = *(arg1 + 0x38)
    edi_1 = arg1 + 0x48
    *(arg1 + 0x6c) |= 8
    
    if ((**ecx_1)(ecx_1, 0x61d3a0, edi_1) s< 0)
        goto label_4dd228

int32_t* edx = *edi_1

if (edx != 0)
    (*(*edx + 0x1c))(edx, arg1 + 0x88, arg1 + 0x88)

return 0
