// 函数: sub_55cfd0
// 地址: 0x55cfd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af414c != 0)
    return sub_55ca60() __tailcall

int32_t eax

if (sub_4c3da0(eax, 0xffffffff, &data_1318c40, 0xffffffff) != 2)
    return MessageBoxA(data_1af0a80, 0x621720, 0x6215e0, MB_OK)

if (sub_4cfc80(&data_1318e48) - 2 u> 0xf)
    return MessageBoxA(data_1af0a80, 0x6216ec, 0x6215e0, MB_OK)

int32_t ecx_1 = data_1319050

if (ecx_1 u> 0x752f)
    return MessageBoxA(data_1af0a80, 0x6216b4, 0x6215e0, MB_OK)

int32_t esi = data_1319054

if (esi - 1 u> 0x63)
    return MessageBoxA(data_1af0a80, 0x621684, 0x6215e0, MB_OK)

data_20c54b0 = ecx_1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = 0x3e8
int32_t temp0 = divs.dp.d(edx_1:eax_6, esi)
int32_t ecx_3 = data_1319058 + 2
data_20c54a0 = temp0
data_20c4ff8 = mods.dp.d(edx_1:eax_6, esi)
data_20c54a4 = 0
data_20c54a8 = 0
data_1af414c = 1
data_1b8a6f8 = 0
data_1b1bd10 = temp0 + ecx_3
uint32_t eax_9 = timeGetTime()
bool cond:1 = data_71929c == 0x11
data_20c54ac = eax_9
int32_t eax_10 = data_1b8a6f8

if (cond:1)
    eax_10 = 1

data_1af0a0c = 0xffffffff
HWND hDlg = data_1af0a80
data_1b8a6f8 = eax_10
data_20c4ff4 = data_131310c
SetDlgItemTextA(hDlg, 0x4e63, 0x62167c)
return sub_55ca20(0) __tailcall
