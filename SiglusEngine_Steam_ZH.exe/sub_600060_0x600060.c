// 函数: sub_600060
// 地址: 0x600060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

enum WAIT_EVENT result = *(arg1 + 0xd4)

if (result s>= WAIT_OBJECT_0)
    int32_t* edi_2 = result * 0x15c + *(arg1 + 0xc8)
    HANDLE esi_1 = *edi_2
    
    if (esi_1 != 0)
        WaitForSingleObject(esi_1, 0xffffffff)
    
    int32_t ebx
    ebx.b = edi_2[0x13].b
    
    if (esi_1 != 0)
        ReleaseSemaphore(esi_1, 1, nullptr)
    
    if (ebx.b != 0)
        result.b = 1
        return result

result.b = 0
return result
