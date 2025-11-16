// 函数: sub_54c260
// 地址: 0x54c260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_20c21ec

if (eax != 0)
    eax = 1

bool cond:1 = data_20c21f0 != 0
data_13132ec = eax

if (cond:1)
    int32_t eax_1 = data_13132c0
    
    if (eax_1 == 1)
        eax_1 = 0
    
    data_13132c0 = eax_1
else
    data_13132c0 = 1

int32_t eax_2 = data_20c21f4

if (eax_2 != 0)
    eax_2 = 1

data_13132f0 = eax_2
int32_t eax_3 = data_20c21f8

if (eax_3 != 0)
    eax_3 = 1

int32_t edx = 0xff - data_20c21c8
bool cond:3 = 0xff - data_20c21c8 s>= 0
data_13132f4 = eax_3

if (not(cond:3))
    edx = 0
else if (edx s> 0xff)
    edx = 0xff

data_131326c = edx
sub_54b730(0, edx)
int32_t edx_1 = 0xff - data_20c21cc

if (0xff - data_20c21cc s< 0)
    edx_1 = 0
else if (edx_1 s> 0xff)
    edx_1 = 0xff

data_1313270 = edx_1
sub_54b730(1, edx_1)
int32_t edx_2 = 0xff - data_20c21d0

if (0xff - data_20c21d0 s< 0)
    edx_2 = 0
else if (edx_2 s> 0xff)
    edx_2 = 0xff

data_1313274 = edx_2
sub_54b730(2, edx_2)
int32_t edx_3 = 0xff - data_20c21d4

if (0xff - data_20c21d4 s< 0)
    edx_3 = 0
else if (edx_3 s> 0xff)
    edx_3 = 0xff

data_1313278 = edx_3
sub_54b730(3, edx_3)
sub_54b440()
sub_54b4c0()
return EndDialog(data_20c21c4, 0)
