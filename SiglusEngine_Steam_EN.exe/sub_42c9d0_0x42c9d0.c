// 函数: sub_42c9d0
// 地址: 0x42c9d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t* ecx = &data_8c4ca4
int32_t edi = 0
int32_t var_c = 0
void* esi = &data_ef090c
int32_t* var_10 = &data_8c4ca4
int32_t* i = &data_ef08e8
int32_t var_8 = 0

do
    if (eax u<= 1)
        sub_42bc60(ecx, i)
        eax = sub_42bd40(i)
    
    sub_4d1c30(eax, edi + &data_ef0be8, edi + &data_8c4ca4, 0x88)
    sub_4d1c30(eax, esi + 0x3ec, esi - 0x24, 0x180)
    *(esi + 0x30) = data_13926fc
    int32_t eax_2 = data_13926f8
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
    *(esi + 0x34) = eax_2
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x40) = 0
    sub_4d1c30(eax_2, esi + 0x3fc, esi - 0x14, 0x58)
    sub_42e3c0(esi - 0x14, esi + 0x3fc)
    i = &i[0x60]
    int32_t eax_3 = data_131310c
    *(esi + 0x10) = eax_3
    ecx = &var_10[0x22]
    *(var_8 + &data_8c4d1c) = eax_3
    esi += 0x180
    edi = var_8 + 0x88
    eax = var_c + 1
    var_8 = edi
    var_c = eax
    var_10 = ecx
while (i s< &data_ef0be8)

if (data_8c4ca4 != 0 && data_8c4ca8 != 0)
    sub_4cfd70(&data_13926d4, &data_8c4ca8)
    data_13926d0 = data_8c4cf0
    return sub_42c7b0(0)

data_13926d4 = 0
data_13926d0 = 0xffffffff
return sub_42c7b0(0)
