// 函数: sub_6c4400
// 地址: 0x6c4400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
HWND hDlg = *(arg1 + 4)

if (esi + 8 != arg4)
    sub_52e3c0(esi + 8, arg4, 0, 0xffffffff)

*(esi + 0x5c) = arg5
*(esi + 0x60) = arg6
HWND eax_3 = GetDlgItem(hDlg, arg3)
*(esi + 4) = eax_3
sub_6c0100(esi, eax_3)
arg2 = esi
return sub_530ba0(arg1 + 0x64, &arg2)
