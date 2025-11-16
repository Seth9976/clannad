// 函数: sub_486e85
// 地址: 0x486e85
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_b9a5ec != 0)
    data_b9a5ec = 0
    return 0xff

void* eax_1 = data_b9a5e0
int32_t ecx = *(eax_1 + 0x20)
uint32_t result

if (ecx == 0)
    result = sub_4869ce(eax_1)
else if (ecx != 1)
    result = 0xff
else
    result = sub_486cc6(eax_1)

if (result != 0x37)
    return result

data_b9a5e8 = 1
return 0
