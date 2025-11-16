// 函数: sub_485249
// 地址: 0x485249
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi

if (arg2.b == 0)
    HANDLE hFile = *(*(arg1 + 4) + 0x30)
    uint32_t fileSizeHigh
    uint32_t eax_2 = GetFileSize(hFile, &fileSizeHigh)
    void* ecx = *(arg1 + 4)
    int32_t edx_2 = sbb.d(fileSizeHigh, *(ecx + 0x44), eax_2 u< *(ecx + 0x40))
    int32_t* ecx_1 = *(arg1 + 8)
    *(arg1 + 0x10) = eax_2 - *(ecx + 0x40)
    *(arg1 + 0x14) = edx_2
    int32_t eax_5
    int32_t edx_3
    eax_5, edx_3 = (*(*ecx_1 + 8))()
    int32_t edx_4 = sbb.d(edx_3, *(arg1 + 0x14), eax_5 u< *(arg1 + 0x10))
    int32_t buffer = eax_5 - *(arg1 + 0x10)
    int32_t var_10_1 = edx_4
    enum SET_FILE_POINTER_MOVE_METHOD eax_7
    int32_t ecx_2
    eax_7, ecx_2 = WriteFile(hFile, &buffer, 8, &arg2, nullptr)
    
    if (eax_7 == FILE_BEGIN)
        sub_485159(ecx_2, hFile, eax_2, fileSizeHigh, eax_7)
        SetEndOfFile(hFile)
        return 0x8007000e

return 0
