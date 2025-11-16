// 函数: sub_6cf700
// 地址: 0x6cf700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_6cad70()

if (result == 0)
    return result

*(result + 0x78) |= 0x300000
bool cond:0_1 = *(result + 0x58) == 0
*(result + 0x74) = 0x8000
*(result + 0x2a0) = 0x2000
*(result + 0x60) = 0
*(result + 0x5c) = sub_6d83d0

if (not(cond:0_1))
    *(result + 0x58) = 0
    sub_6d4470(result, "Can't set both read_data_fn and write_data_fn in the same structure")

*(result + 0x174) = 0
return result
