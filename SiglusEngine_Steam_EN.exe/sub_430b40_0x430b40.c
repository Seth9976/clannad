// 函数: sub_430b40
// 地址: 0x430b40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
void* ebx = &data_ef0ff8
void* eax = &data_8c4db4
int32_t ecx = 0
void* var_c = &data_8c4db4
void* i = &data_ef0ff8
int32_t var_8 = 0

do
    if (esi u<= 0x1f)
        sub_4d1ba0(eax, 0x24, eax, 0)
        sub_42e670(i)
        sub_42da30(i)
        eax = sub_42d9c0(i)
        ecx = var_8
        
        if (data_702fc0 != 0)
            *((esi << 2) + &data_20c46b4) += 1
    
    sub_4d1c30(eax, ecx + 0xef25f8, ecx + &data_8c4db4, 0x28)
    sub_4d1c30(eax, ebx + 0x58, ebx, 0x58)
    sub_42e3c0(ebx, ebx + 0x58)
    i += 0xb0
    ecx = var_8 + 0x28
    eax = var_c + 0x28
    var_8 = ecx
    var_c = eax
    ebx += 0xb0
    esi += 1
while (i s< 0xef25f8)

sub_430980(0)
int32_t result = data_20c46b0

if (data_702fc0 != 0)
    result = 1

data_20c46b0 = result
return result
