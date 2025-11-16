// 函数: sub_6f7fb0
// 地址: 0x6f7fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = data_4ebe4b0
int32_t result

if (ecx == 0)
    result.b = 0
    return result

if (data_4ebe680 == 0)
    data_4ebe680 = 0
    
    if ((*(*ecx + 0x44))(ecx, 0, 0, 0, 0) == 0x88760868)
        data_4ebe680 = 1

result.b = 1
return result
