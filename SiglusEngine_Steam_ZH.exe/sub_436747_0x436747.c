// 函数: sub_436747
// 地址: 0x436747
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[0xc8] == 0
int32_t edi
int32_t var_c = edi
*arg1 = &data_abbcf8

if (not(cond:0))
    arg1[0xc8] = 0

void* ecx = arg1[0xd2]

if (ecx != 0)
    sub_436726(ecx, 1)
    arg1[0xd2] = 0

void* ecx_1 = arg1[0xd3]

if (ecx_1 != 0)
    sub_433cd7(ecx_1, 1)
    arg1[0xd3] = 0

void* ecx_2 = arg1[0xd4]

if (ecx_2 != 0)
    sub_433346(ecx_2, 1)
    arg1[0xd4] = 0

void* ecx_3 = arg1[0xd5]

if (ecx_3 != 0)
    sub_42f3a5(ecx_3, 1)
    arg1[0xd5] = 0

void* ecx_4 = arg1[0xd6]

if (ecx_4 != 0)
    sub_42f2da(ecx_4, 1)
    arg1[0xd6] = 0

int32_t eax_1 = arg1[0xcf]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0xcf] = 0

int32_t eax_2 = arg1[0xd1]

if (eax_2 != 0)
    j__free(eax_2)
    arg1[0xd1] = 0

return sub_42dadf(&arg1[4]) __tailcall
