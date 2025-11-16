// 函数: sub_4e2aa0
// 地址: 0x4e2aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* (__stdcall** eax_1)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x30)
int32_t eax_3 = *(arg1 + 0x78) * *(arg1 + 0x70)
bool cond:0 = *(arg1 + 0x13c) != 2
*(arg1 + 0x1c8) = eax_1
*eax_1 = sub_4e20d0
eax_1[2] = 0
eax_1[0xa] = eax_3

if (cond:0)
    eax_1[1] = sub_4e21c0
    eax_1[3] = sub_4e2200
    eax_1[8] = 0
    return sub_4e1ff0(arg1)

int32_t ecx = *(arg1 + 4)
eax_1[1] = sub_4e20f0
eax_1[3] = sub_4e2a50
eax_1[8] = (*(ecx + 4))(arg1, 1, eax_3)
return sub_4e1ff0(arg1)
