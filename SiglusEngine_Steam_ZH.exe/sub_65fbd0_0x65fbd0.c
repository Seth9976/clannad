// 函数: sub_65fbd0
// 地址: 0x65fbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx_3 = data_bac4a0
void* result
result.b = *(ecx_3 + 0x1e9) == 0
*(ecx_3 + 0x1e9) = result.b

if (result.b != 0)
    void* ecx = data_bac4d0
    
    if (*(ecx + 0x1e818) == 0)
        (*(*(ecx + 0x1e814) + 0x10))(data_4ebe3ac)
        ecx = data_bac4d0
    
    if (*(data_bac4e4 + 0x1b0) == 0 && *(ecx + 0x1dec4) == 0)
        (*(*(ecx + 0x1dec0) + 0x10))(data_4ebe3ac)

result.b = 1
return result
