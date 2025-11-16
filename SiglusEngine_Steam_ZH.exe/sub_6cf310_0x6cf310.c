// 函数: sub_6cf310
// 地址: 0x6cf310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result
result.b = *(arg1 + 9)

if (result.b u< 8)
    void* ebx_2 = *(arg1 + 4) + arg2
    int32_t esi_1
    
    if (result.b != 1)
        if (result.b == 2)
            esi_1 = 0xadb460
            goto label_6cf340
        
        if (result.b == 4)
            esi_1 = 0xadb360
            goto label_6cf340
    else
        esi_1 = 0xadb560
    label_6cf340:
        result = 0
        void* edi_2 = ebx_2 - arg2
        int32_t ecx = 0
        
        if (arg2 u> ebx_2)
            edi_2 = nullptr
        
        if (edi_2 != 0)
            do
                result = zx.d(*arg2)
                arg2 = &arg2[1]
                ecx += 1
                result.b = *(result + esi_1)
                arg2[0xffffffff] = result.b
            while (ecx u< edi_2)

return result
