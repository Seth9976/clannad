// 函数: sub_430a50
// 地址: 0x430a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_430980(1)
int32_t edi = 0
void* var_8 = &data_8c4db4
int32_t eax = 0
void* ebx = &data_ef1050
void* i = &data_ef0ff8
int32_t var_c = 0

do
    sub_4d1c30(eax, eax + &data_8c4db4, eax + 0xef25f8, 0x28)
    sub_4d1c30(eax, ebx - 0x58, ebx, 0x58)
    sub_42e3c0(ebx, ebx - 0x58)
    int32_t* eax_1 = sub_42ea20(ebx)
    
    if (edi u<= 0x1f)
        sub_4d1ba0(eax_1, 0x24, var_8, 0)
        sub_42e670(i)
        sub_42da30(i)
        sub_42d9c0(i)
        
        if (data_702fc0 != 0)
            *((edi << 2) + &data_20c46b4) += 1
    
    i += 0xb0
    var_8 += 0x28
    eax = var_c + 0x28
    ebx += 0xb0
    var_c = eax
    edi += 1
while (i s< 0xef25f8)

int32_t result = data_20c46b0

if (data_702fc0 != 0)
    result = 1

data_20c46b0 = result
return result
