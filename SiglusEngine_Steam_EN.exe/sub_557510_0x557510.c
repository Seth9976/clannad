// 函数: sub_557510
// 地址: 0x557510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_220
int32_t eax_1 = __security_cookie ^ &var_220
GetWindowRect(data_20c30c0, &data_20c30c4)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c30c0, 0xc350)
int32_t eax_6 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(GetDlgItem(data_20c30c0, 0xc350), 0x401, 0x100, &data_6138e3), 
            0x4f4f, data_20c30c0, 0x20c30d4, 1, 0), 
        0x4f8b, data_20c30c0, 0x20c310c, 1, 3), 
    0x4f29, data_20c30c0, 0x20c3144, 1, 3)
int32_t eax_10 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_6, 0x4fa8, data_20c30c0, 0x20c317c, 1, 3), 0x4f19, data_20c30c0, 
            0x20c31b4, 1, 3), 
        0x4f90, data_20c30c0, 0x20c31ec, 1, 3), 
    0x4ee7, data_20c30c0, 0x20c3224, 1, 3)
int32_t eax_14 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_10, 0x4e4e, data_20c30c0, 0x20c325c, 1, 3), 0x4f2e, data_20c30c0, 
            0x20c3294, 1, 3), 
        0x4f4b, data_20c30c0, 0x20c32cc, 1, 3), 
    0x4ee8, data_20c30c0, 0x20c3304, 1, 3)
int32_t eax_18 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_14, 0x4e4f, data_20c30c0, 0x20c333c, 1, 3), 0x4f2f, data_20c30c0, 
            0x20c3374, 1, 3), 
        0x4f4c, data_20c30c0, 0x20c33ac, 1, 3), 
    0x4eed, data_20c30c0, 0x20c33e4, 1, 3)
int32_t eax_22 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_18, 0x4e52, data_20c30c0, 0x20c341c, 1, 3), 0x4e65, data_20c30c0, 
            0x20c3454, 1, 3), 
        0x4e6a, data_20c30c0, 0x20c348c, 1, 3), 
    0x4e67, data_20c30c0, 0x20c34c4, 1, 3)
sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_22, 0x4f47, data_20c30c0, 0x20c34fc, 1, 3), 0x4f3d, data_20c30c0, 
            0x20c3534, 1, 3), 
        0x4ee4, data_20c30c0, 0x20c356c, 1, 3), 
    0x4e68, data_20c30c0, 0x20c35a4, 1, 3)
void* lpString
void string

if (data_108f654 == 0)
    lpString = &data_620ee0
else
    char* var_22c = &data_108f654
    sub_4c84d0(&string, 0x620ed8)
    lpString = &string

SetDlgItemTextA(data_20c30c0, 0x4f8b, lpString)
void* lpString_2

if (data_1332d90 == 0)
    SetDlgItemTextA(data_20c30c0, 0x4f29, 0x620f28)
    lpString_2 = &data_620ee0
else
    PSTR lpString_1
    
    if (data_1332d94 == 0)
        lpString_1 = 0x620f04
    else
        lpString_1 = 0x620ee8
    
    SetDlgItemTextA(data_20c30c0, 0x4f29, lpString_1)
    int32_t var_22c_1 = 0x1352a28
    sub_4c84d0(&string, 0x620ed8)
    lpString_2 = &string

SetDlgItemTextA(data_20c30c0, 0x4fa8, lpString_2)
int32_t var_22c_2 = 0x1351bf0
sub_4c84d0(&string, 0x620ed8)
SetDlgItemTextA(data_20c30c0, 0x4f19, &string)
PSTR lpString_3

if (data_1332da8 != 0)
    int32_t var_22c_4 = 0x1350bb0
    char* var_230_2 = &data_1332da8
    sub_4c84d0(&string, 0x620f70)
    lpString_3 = &string
else
    lpString_3 = 0x620f4c

SetDlgItemTextA(data_20c30c0, 0x4f91, lpString_3)
int32_t var_22c_5 = 0x1350bb0
char* var_230_3 = &data_1352000
sub_4c84d0(&string, 0x620f70)
SetDlgItemTextA(data_20c30c0, 0x4f90, &string)
PSTR lpString_4

if (data_1332fb0 != 0)
    char* var_22c_7 = &data_1332fb0
    sub_4c84d0(&string, 0x620ed8)
    lpString_4 = &string
else
    lpString_4 = 0x620f4c

SetDlgItemTextA(data_20c30c0, 0x4ee8, lpString_4)
SetDlgItemTextA(data_20c30c0, 0x4ee6, (&data_6128dc)[data_1332d98])
SetDlgItemTextA(data_20c30c0, 0x4ee5, (&data_612404)[data_1333e0c])
char* var_22c_10 = &data_1352208
sub_4c84d0(&string, 0x620ed8)
SetDlgItemTextA(data_20c30c0, 0x4ee7, &string)
PSTR lpString_5

if (data_13331b8 != 0)
    int32_t var_22c_12 = 0x1350390
    char* var_230_4 = &data_13331b8
    sub_4c84d0(&string, 0x620f70)
    lpString_5 = &string
else
    lpString_5 = 0x620f4c

SetDlgItemTextA(data_20c30c0, 0x4e4f, lpString_5)
SetDlgItemTextA(data_20c30c0, 0x4e4d, (&data_6128dc)[data_1332d9c])
SetDlgItemTextA(data_20c30c0, 0x4e4c, (&data_612404)[data_1333e10])
int32_t var_22c_15 = 0x1350390
char* var_230_5 = &data_1352410
sub_4c84d0(&string, 0x620f70)
SetDlgItemTextA(data_20c30c0, 0x4e4e, &string)
PSTR lpString_6

if (data_13333c0 != 0)
    int32_t var_22c_17 = 0x134e310
    char* var_230_6 = &data_13333c0
    sub_4c84d0(&string, 0x620f70)
    lpString_6 = &string
else
    lpString_6 = 0x620f4c

SetDlgItemTextA(data_20c30c0, 0x4f2f, lpString_6)
SetDlgItemTextA(data_20c30c0, 0x4f2d, (&data_6128dc)[data_1332da0])
SetDlgItemTextA(data_20c30c0, 0x4f2c, (&data_612404)[data_1333e14])
int32_t var_22c_20 = 0x134e310
char* var_230_7 = &data_1352618
sub_4c84d0(&string, 0x620f70)
SetDlgItemTextA(data_20c30c0, 0x4f2e, &string)
PSTR lpString_7

if (data_13335c8 != 0)
    int32_t var_22c_22 = 0x1350fc0
    char* var_230_8 = &data_13335c8
    sub_4c84d0(&string, 0x620f70)
    lpString_7 = &string
else
    lpString_7 = 0x620f4c

SetDlgItemTextA(data_20c30c0, 0x4f4c, lpString_7)
SetDlgItemTextA(data_20c30c0, 0x4f4a, (&data_6128dc)[data_1332da4])
SetDlgItemTextA(data_20c30c0, 0x4f49, (&data_612404)[data_1333e18])
int32_t var_22c_25 = 0x1350fc0
char* var_230_9 = &data_1352820
sub_4c84d0(&string, 0x620f70)
SetDlgItemTextA(data_20c30c0, 0x4f4b, &string)
void* lpString_8

if (data_13339d8 == 0)
    SetDlgItemTextA(data_20c30c0, 0x4eec, &data_620ee0)
    lpString_8 = &data_6138e3
else
    char* var_22c_27 = &data_13339d8
    sub_4c84d0(&string, 0x620ed8)
    SetDlgItemTextA(data_20c30c0, 0x4eec, &string)
    int32_t eax_34 = data_1af4514
    
    if (eax_34 == 1)
        int32_t var_22c_29 = data_1af4510 + 0x41
        sub_4c84d0(&string, 0x620f78)
        lpString_8 = &string
    else if (eax_34 != 2)
        lpString_8 = &data_620fcc
    else
        sub_4cfd70(&string, 0x620fa0)
        lpString_8 = &string

SetDlgItemTextA(data_20c30c0, 0x4eed, lpString_8)
SetDlgItemTextA(data_20c30c0, 0x4e51, 0x620ff0)
int32_t eax_37 = data_1af450c
void* lpString_9

if (eax_37 == 1)
    int32_t var_22c_30 = data_1af4510 + 0x41
    sub_4c84d0(&string, &data_621000)
    lpString_9 = &string
else if (eax_37 != 2)
    lpString_9 = &data_62105c
else
    int32_t var_22c_31 = data_1af4510 + 0x41
    sub_4c84d0(&string, &data_62102c)
    lpString_9 = &string

SetDlgItemTextA(data_20c30c0, 0x4e52, lpString_9)
int32_t var_21c
int32_t eax_42 = sub_4bf390(&var_21c)
int32_t ecx_25 = var_21c
void* lpString_10

if (ecx_25 == 0xffffffff)
    SetDlgItemTextA(data_20c30c0, 0x4e64, &data_620ee0)
    lpString_10 = &data_6210b0
else
    int32_t var_22c_32 = ecx_25 + 0x41
    sub_4c84d0(&string, 0x621084)
    SetDlgItemTextA(data_20c30c0, 0x4e64, &string)
    int32_t var_22c_34 = eax_42
    sub_4c84d0(&string, 0x62108c)
    lpString_10 = &string

SetDlgItemTextA(data_20c30c0, 0x4e65, lpString_10)
int32_t eax_43 = data_1af4530
PSTR lpString_11

if (eax_43 u> 3)
    lpString_11 = 0x62110c
else
    switch (eax_43)
        case 0
            lpString_11 = 0x6210d0
        case 1
            lpString_11 = 0x6210e0
        case 2
            lpString_11 = 0x6210ec
        case 3
            lpString_11 = 0x6210fc

SetDlgItemTextA(data_20c30c0, 0x4e69, lpString_11)
int32_t eax_44 = data_1af4534
void* const var_230_11

if (eax_44 != 0)
    int32_t var_22c_36 = eax_44
    var_230_11 = &data_621134
else
    int32_t var_22c_35 = eax_44
    var_230_11 = &data_621118

sub_4c84d0(&string, var_230_11)
SetDlgItemTextA(data_20c30c0, 0x4e6a, &string)
int32_t eax_45 = data_1af4528
PSTR lpString_12

if (eax_45 u> 3)
    lpString_12 = 0x62110c
else
    switch (eax_45)
        case 0
            lpString_12 = 0x6210d0
        case 1
            lpString_12 = 0x6210e0
        case 2
            lpString_12 = 0x6210ec
        case 3
            lpString_12 = 0x6210fc

SetDlgItemTextA(data_20c30c0, 0x4e66, lpString_12)
int32_t eax_46 = data_1af452c
void* const var_230_12

if (eax_46 - 1 u> 3)
    int32_t var_22c_42 = eax_46
    var_230_12 = &data_6211ac
else
    switch (eax_46)
        case 1
            int32_t var_22c_38 = eax_46
            var_230_12 = &data_621150
        case 2
            int32_t var_22c_39 = eax_46
            var_230_12 = &data_62116c
        case 3
            int32_t var_22c_40 = eax_46
            var_230_12 = &data_621180
        case 4
            int32_t var_22c_41 = eax_46
            var_230_12 = &data_621198

sub_4c84d0(&string, var_230_12)
SetDlgItemTextA(data_20c30c0, 0x4e67, &string)
int32_t eax_47 = data_1af4520
PSTR lpString_13

if (eax_47 u> 3)
    lpString_13 = 0x62110c
else
    switch (eax_47)
        case 0
            lpString_13 = 0x6210d0
        case 1
            lpString_13 = 0x6210e0
        case 2
            lpString_13 = 0x6210ec
        case 3
            lpString_13 = 0x6210fc

SetDlgItemTextA(data_20c30c0, 0x4f46, lpString_13)
int32_t ecx_28 = data_1af4524
void* const var_230_13

if (ecx_28 == 1)
    int32_t var_22c_46 = 1
    var_230_13 = &data_6211d4
else if (ecx_28 == 2)
    int32_t var_22c_45 = 2
    var_230_13 = &data_6211e8
else
    int32_t var_22c_44 = ecx_28
    var_230_13 = &data_621204

sub_4c84d0(&string, var_230_13)
SetDlgItemTextA(data_20c30c0, 0x4f47, &string)
int32_t eax_50 = data_1af451c
PSTR lpString_14

if (eax_50 u> 3)
    lpString_14 = 0x62110c
else
    switch (eax_50)
        case 0
            lpString_14 = 0x6210d0
        case 1
            lpString_14 = 0x6210e0
        case 2
            lpString_14 = 0x6210ec
        case 3
            lpString_14 = 0x6210fc

SetDlgItemTextA(data_20c30c0, 0x4f3c, lpString_14)
int32_t eax_51 = data_137475c
void* const var_230_14

if (eax_51 == 0)
    int32_t var_22c_49 = 0
    var_230_14 = &data_621214
else
    int32_t var_22c_48 = eax_51
    var_230_14 = &data_621228

sub_4c84d0(&string, var_230_14)
SetDlgItemTextA(data_20c30c0, 0x4f3d, &string)
int32_t eax_52 = data_1332b84
PSTR lpString_15

if (eax_52 u> 3)
    lpString_15 = 0x62110c
else
    switch (eax_52)
        case 0
            lpString_15 = 0x6210d0
        case 1
            lpString_15 = 0x6210e0
        case 2
            lpString_15 = 0x6210ec
        case 3
            lpString_15 = 0x6210fc

SetDlgItemTextA(data_20c30c0, 0x4ee3, lpString_15)
int32_t eax_53 = data_1333e30
void* const var_230_15

if (eax_53 == 0)
    int32_t var_22c_52 = 0
    var_230_15 = &data_621214
else
    int32_t var_22c_51 = eax_53
    var_230_15 = &data_621228

sub_4c84d0(&string, var_230_15)
SetDlgItemTextA(data_20c30c0, 0x4ee4, &string)
int32_t eax_54 = data_1af4510
PSTR lpString_16

if (eax_54 != 0xffffffff)
    int32_t var_22c_54 = eax_54 + 0x41
    sub_4c84d0(&string, 0x621084)
    lpString_16 = &string
else
    lpString_16 = 0x621238

int32_t var_22c_55 = SetDlgItemTextA(data_20c30c0, 0x4e68, lpString_16)
BOOL result = sub_4d5720(data_20c30c0)
sub_5f02dd(eax_1 ^ &var_220)
return result
