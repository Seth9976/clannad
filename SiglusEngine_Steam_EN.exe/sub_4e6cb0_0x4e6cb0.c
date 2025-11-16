// 函数: sub_4e6cb0
// 地址: 0x4e6cb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1c0551f = 0
data_1c45524 = 0
data_1ccd298 = 0
data_1c45528 = 0
sub_4c56a0()
data_1c04208 = CreateSemaphoreA(nullptr, 1, 1, nullptr)
sub_4c2340()
sub_4cc6d0()
data_1c04434 = 0
data_1c04430 = 1
data_1c0442c = 1
__builtin_memset(0x20beb70, 0, 0x180)
data_20beb60 = 0
data_20beb64 = 0
__builtin_memset(0x20becf0, 0, 0x180)
data_1c04428 = 0xffffffff
sub_4bdf10()
data_70278c = 0
sub_4beb10()
sub_4cb590()
sub_4d7110()
sub_4c9b50()
data_13701e0 = 1
HWND eax_1 = GetFocus()
char eax_2

if (eax_1 == data_7027bc || (data_139270c != 0xffffffff && eax_1 == data_1bfe270))
    eax_2 = GetKeyState(0x90)

int32_t eax_3

if ((eax_1 != data_7027bc && (data_139270c == 0xffffffff || eax_1 != data_1bfe270))
        || (eax_2 & 1) == 0)
    eax_3 = 0
else
    eax_3 = 1

data_1c05198 = eax_3
data_1c0518c = 0
data_1c0518b = 0
data_1c0518a = 0
data_1c05189 = 0
data_1c05188 = 0
data_1c051a0 = 0
data_1c05184 = 0
data_1c0519c = 0
data_1c05178 = 0
data_1392cc8 = 1
return sub_4e6b70() __tailcall
