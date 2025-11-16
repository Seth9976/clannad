// 函数: ??_G_com_error@@UAEPAXI@Z
// 地址: 0x761040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[2]
*arg1 = &data_ab2a24

if (ecx != 0)
    (*(*ecx + 8))(ecx)

HLOCAL hMem = arg1[3]

if (hMem != 0)
    LocalFree(hMem)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
