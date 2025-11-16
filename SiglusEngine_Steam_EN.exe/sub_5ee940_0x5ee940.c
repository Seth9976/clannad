// 函数: sub_5ee940
// 地址: 0x5ee940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_30 = arg5
double var_38 = arg6
int64_t var_58 = 0x4020000000000000
double xmm0_3 = 0.5
int32_t var_28 = arg8 << 2

if (arg1 s< 0xffffffff)
    arg1 = 0xffffffff

if (arg3 s> arg8 - 1)
    arg3 = arg8 - 1

if (arg2 s< 0xffffffff)
    arg2 = 0xffffffff

int32_t result = arg4

if (result s> arg9 - 1)
    arg4 = arg9 - 1

if (data_1c45528 s< arg13)
    result = sub_58c8c0(arg13)

int32_t var_8 = 0
int32_t var_c = 0xffffffff
int32_t ecx_5 = arg13
int32_t* edi = data_1ccd298

while (true)
    int32_t var_48_1 = (int.q(fconvert.t(var_30) - fconvert.t(xmm0_3))).d
    
    if (var_48_1 s>= arg1 && var_48_1 s<= arg3)
        result = (int.q(fconvert.t(var_38) - fconvert.t(xmm0_3))).d
        
        if (result s>= arg2 && result s<= arg4)
            var_8 += 1
            
            if (var_c == 0xffffffff)
                var_c = ecx_5
            
            result = *(((result * arg8 + var_48_1) << 2) + arg7)
            *edi = result
    
    int32_t temp2_1 = ecx_5
    ecx_5 -= 1
    
    if (temp2_1 == 1)
        break
    
    var_30 = fconvert.d(fconvert.t(var_30) + fconvert.t(arg11))
    var_38 = fconvert.d(fconvert.t(var_38) + fconvert.t(arg12))
    edi = &edi[1]

if (var_8 == 0)
    return result

int32_t eax_9 = arg13 - var_c
int32_t ecx_7 = eax_9 << 2
data_1cd43e8 = arg10 + ecx_7
data_1cd43e4 = var_8 << 2
data_1cd43e0 = 1
data_1cd43dc = data_1ccd298 + ecx_7
data_1cd43d8 = var_8 << 2
data_1cd43d4 = 1
data_1cd43d0 = var_8
data_1cd43cc = 1
data_1cd43e4 -= var_8 << 2
data_1cd43d8 -= var_8 << 2

if (data_1cd4320 != 0 && data_1c45540 != 0xff)
    data_1c4598c += eax_9
    
    if (data_1c4598c s< data_1cd4368)
        data_1cd4370
        data_1cd435c = mods.dp.d(
            sx.q(data_1cd4370 - mods.dp.d(sx.q(data_1cd4368 - data_1c4598c), data_1cd4370)), 
            data_1cd4370)
    else
        data_1cd4370
        data_1cd435c = mods.dp.d(sx.q(data_1c4598c - data_1cd4368), data_1cd4370)
    
    if (data_1ccd290 s< data_1cd4364)
        data_1cd436c
        data_1cd4358 = mods.dp.d(
            sx.q(data_1cd436c - mods.dp.d(sx.q(data_1cd4364 - data_1ccd290), data_1cd436c)), 
            data_1cd436c)
    else
        data_1cd436c
        data_1cd4358 = mods.dp.d(sx.q(data_1ccd290 - data_1cd4364), data_1cd436c)
    
    data_1cd4354 = data_1cd435c
    data_1cd4350 = data_1cd4358 * data_1cd4370 + data_1cd437c
    data_1cd434c = data_1cd4370 * data_1cd436c + data_1cd437c

uint32_t eax_43 = zx.d(data_1c0551e)
return sub_582330(eax_43, data_1cd4320, data_1c4ce4c, data_1c45540, eax_43, zx.d(data_1c0551c), 
    zx.d(data_1c0551d), data_1c45984, data_1c4554c, data_1c45548, zx.d(data_1ccce88), data_1ccce70)
