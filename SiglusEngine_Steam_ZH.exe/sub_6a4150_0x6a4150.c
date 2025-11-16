// 函数: sub_6a4150
// 地址: 0x6a4150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_4ebe2a0
int32_t result = (data_4ebe2a4 - ecx) s>> 7

if (result u>= 1)
    return result

int32_t ecx_2 = (ecx - data_4ebe29c) s>> 7

if (0x1ffffff - ecx_2 u>= 1)
    return sub_6a41e0(sub_6a41a0(ecx_2 + 1))

sub_743191("vector<T> too long")
noreturn
