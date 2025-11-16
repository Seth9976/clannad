// 函数: sub_66c750
// 地址: 0x66c750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
void** ebx = arg3
void* esi_1 = edi - ebx
int32_t i

for (i = esi_1 s/ 0x30; i s> 1; i = esi_1 s/ 0x30)
    void** var_14_1 = arg3
    arg3 = sub_66e870(i, edi, ebx, arg4)
    esi_1 -= 0x30
    edi -= 0x30

return i
