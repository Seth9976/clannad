// 函数: sub_4cd7b0
// 地址: 0x4cd7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3

if (*(esi + 8) != 0 || *(esi + 0x1c) != 0)
    sub_4cd820(arg3)

arg3.w = arg6
*(esi + 0x2c) = arg3.w
*(esi + 0x30) = arg8
int32_t ecx
ecx.w = arg7
*(esi + 0x2e) = ecx.w
*(esi + 0xc) = arg4
*(esi + 0x10) = arg4
*(esi + 0x14) = arg5
uint32_t result = divu.dp.d(0:arg5, zx.d(ecx.w) u>> 3)
*(esi + 8) = arg2
*esi = 0
*(esi + 4) = 1
*(esi + 0x28) = 0
*(esi + 0x18) = result
return result
