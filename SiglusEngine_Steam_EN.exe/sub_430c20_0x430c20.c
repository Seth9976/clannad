// 函数: sub_430c20
// 地址: 0x430c20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = &data_1305cbc
uint32_t var_8 = 0
int32_t* var_c = &data_1305cbc
int32_t result

for (void* i = &data_1392838; i s< 0x1392dc8; )
    *(i - 0x118) = 0xffffffff
    *(i - 0x114) = 0xffffffff
    *(i - 0xe0) = 0
    sub_462b40(i - 0xdc)
    int32_t eax_1 = edx[1]
    *(i - 4) = 0
    *i = 0
    *(i + 4) = 0xff
    *(i + 8) = 0
    *(i + 0xc) = 0
    *(i + 0x10) = 0
    *(i + 0x14) = 0
    *(i + 0x18) = 0xff
    *(i + 0x1c) = 0
    *(i + 0x20) = eax_1
    *(i + 0x24) = 1
    *(i + 0x28) = 0
    *(i + 0x2c) = 0
    *(i + 0x44) = 0xffffffff
    *(i + 0x30) = 0
    *(i + 0x34) = 0
    *(i + 0x48) = 0xffffffff
    *(i + 0x4c) = 0
    *(i + 0x50) = 0
    *(i + 0x6c) = 0xffffffff
    *(i + 0x80) = 0
    *(i + 0x70) = 0xffffffff
    int32_t ebx_1 = *(i + 0x10c)
    int32_t eax_2 = sub_4d1ba0(eax_1, 0x8c, i + 0x98, 0)
    *(i + 0x98) = 0
    *(i + 0x9c) = 0
    *(i + 0xa0) = 0
    *(i + 0xe0) = 0xff
    *(i + 0xe4) = 0
    *(i + 0xf0) = 0x3e8
    *(i + 0xf4) = 0x3e8
    *(i + 0xfc) = 0xffffffff
    *(i + 0x100) = 0xffffffff
    *(i + 0x104) = 0xffffffff
    *(i + 0x108) = 0xffffffff
    *(i + 0x10c) = ebx_1
    *(i + 0x110) = 0xffffffff
    *(i + 0x114) = 0xffffffff
    *(i + 0x118) = 0xffffffff
    *(i + 0x11c) = 0xffffffff
    *(i + 0x120) = 1
    int32_t ebx_2 = *(i + 0x198)
    sub_4d1ba0(eax_2, 0x8c, i + 0x124, 0)
    *(i + 0x198) = ebx_2
    *(i + 0x124) = 0
    *(i + 0x128) = 0
    *(i + 0x12c) = 0
    *(i + 0x16c) = 0xff
    *(i + 0x170) = 0
    *(i + 0x17c) = 0x3e8
    *(i + 0x180) = 0x3e8
    *(i + 0x188) = 0xffffffff
    *(i + 0x18c) = 0xffffffff
    *(i + 0x190) = 0xffffffff
    *(i + 0x194) = 0xffffffff
    *(i + 0x19c) = 0xffffffff
    *(i + 0x1a0) = 0xffffffff
    *(i + 0x1a4) = 0xffffffff
    *(i + 0x1a8) = 0xffffffff
    *(i + 0x1ac) = 1
    sub_430fe0(var_8)
    *(i - 0xb0) = 0
    *(i - 0xd8) = var_c[-1]
    *(i - 0xd4) = *var_c
    *(i - 0x110) = var_c[3]
    *(i - 0x10c) = var_c[4]
    *(i - 0x108) = var_c[5]
    *(i - 0x104) = var_c[6]
    *(i - 0x100) = var_c[7]
    *(i - 0xfc) = var_c[8]
    *(i - 0xf8) = var_c[9]
    *(i - 0xf4) = var_c[0xa]
    *(i - 0xf0) = var_c[0xb]
    *(i - 0xec) = var_c[0xc]
    result = var_c[2]
    *(i + 0x94) = result
    
    if (result s<= 0)
        *(i + 0x94) = 1
    
    *(i - 0xe8) = 0
    *(i - 0xe6) = 0
    edx = var_c + 0x80
    *(i - 0xe4) = 0
    i += 0x2c8
    var_8 += 1
    var_c = edx

return result
