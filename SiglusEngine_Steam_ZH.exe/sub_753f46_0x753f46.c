// 函数: sub_753f46
// 地址: 0x753f46
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = &data_b4cd50
int32_t edi = 0xb955c8

do
    if (*(i + 4) == 1)
        *i = edi
        edi += 0x18
        sub_74d1a6(*i, 0xfa0, 0)
    
    i += 8
while (i s< &data_b4ce70)

return 1
