// 函数: sub_49c370
// 地址: 0x49c370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0

for (int32_t* i = &data_8d02b4; i s< &data_8fcab4; )
    if (esi u<= 7)
        int32_t eax_1 = sub_49a750(esi, 0)
        sub_4d1c30(eax_1, &i[0xb20], i, 0x2c80)
        sub_4d1c30(eax_1, &(&data_f466fc)[esi * 2], &(&data_f466f8)[esi * 2], 4)
        sub_49a6d0(esi, 1)
        (&data_20f0094)[esi * 2] += 1
        (&data_20f0098)[esi * 2] += 1
    
    i = &i[0x1640]
    esi += 1
