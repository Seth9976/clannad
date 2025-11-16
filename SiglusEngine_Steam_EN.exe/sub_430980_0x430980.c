// 函数: sub_430980
// 地址: 0x430980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1
int32_t i_1 = 0x20
int32_t var_c = edi
int32_t ebx = 0xef25f8
void* esi = &data_ef1064
int32_t result
int32_t i

do
    sub_4d1ba0(result, 0x24, ebx, 0)
    
    if (edi != 0)
        sub_42e670(esi - 0x14)
    
    sub_42da30(esi - 0x14)
    ebx += 0x28
    edi = var_c
    *(esi + 0x30) = data_13926fc
    result = data_13926f8
    *(esi - 4) = 0xffffffff
    *esi = 0xffffffff
    *(esi + 4) = 0xffffffff
    *(esi - 0x14) = 0
    *(esi - 0x10) = 0
    *(esi - 8) = 0
    *(esi + 0xc) = 0
    *(esi + 0x24) = 1
    *(esi + 0x28) = 0
    *(esi + 0x2c) = 0
    *(esi + 0x34) = result
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x40) = 0
    esi += 0xb0
    i = i_1
    i_1 -= 1
while (i != 1)
return result
