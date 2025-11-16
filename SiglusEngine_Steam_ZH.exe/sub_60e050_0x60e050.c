// 函数: sub_60e050
// 地址: 0x60e050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = data_bac4d0
int32_t i = 0

if (((result[1] - *result) & 0xfffffffc) s> 0)
    do
        sub_681b70(*(*result + (i << 2)))
        result = data_bac4d0
        i += 1
    while (i s< (result[1] - *result) s>> 2)

for (int32_t* i_1 = result[0xc7]; i_1 != result[0xc8]; i_1 = &i_1[1])
    sub_681b70(*i_1)
    result = data_bac4d0

for (int32_t* i_2 = result[0x2563]; i_2 != result[0x2564]; i_2 = &i_2[1])
    sub_681b70(*i_2)
    result = data_bac4d0

return result
