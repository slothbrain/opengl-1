/*
 * Copyright (C) 2007 Jan Dvorak <jan.dvorak@kraxnet.cz>
 *
 * This program is distributed under the terms of the MIT license.
 * See the included MIT-LICENSE file for the terms of this license.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "../common/common.h"

/* OpenGL 1.3 functions */

GL_SIMPLE_FUNC_LOAD(ActiveTexture,1,GLenum,NUM2INT,1,3)
GL_SIMPLE_FUNC_LOAD(ClientActiveTexture,1,GLenum,NUM2INT,1,3)

static void (APIENTRY * fptr_glMultiTexCoord1d)(GLenum,GLdouble);
static VALUE
gl_MultiTexCoord1d(obj,arg1,arg2)
VALUE obj,arg1,arg2;
{
	GLenum target;
	GLdouble s;
	LOAD_GL_FUNC(glMultiTexCoord1d,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLdouble)NUM2DBL(arg2);
	fptr_glMultiTexCoord1d(target,s);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord1f)(GLenum,GLfloat);
static VALUE
gl_MultiTexCoord1f(obj,arg1,arg2)
VALUE obj,arg1,arg2;
{
	GLenum target;
	GLfloat s;
	LOAD_GL_FUNC(glMultiTexCoord1f,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLfloat)NUM2DBL(arg2);
	fptr_glMultiTexCoord1f(target,s);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord1i)(GLenum,GLint);
static VALUE
gl_MultiTexCoord1i(obj,arg1,arg2)
VALUE obj,arg1,arg2;
{
	GLenum target;
	GLint s;
	LOAD_GL_FUNC(glMultiTexCoord1i,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLint)NUM2INT(arg2);
	fptr_glMultiTexCoord1i(target,s);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord1s)(GLenum,GLshort);
static VALUE
gl_MultiTexCoord1s(obj,arg1,arg2)
VALUE obj,arg1,arg2;
{
	GLenum target;
	GLshort s;
	LOAD_GL_FUNC(glMultiTexCoord1s,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLshort)NUM2INT(arg2);
	fptr_glMultiTexCoord1s(target,s);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord2d)(GLenum,GLdouble,GLdouble);
static VALUE
gl_MultiTexCoord2d(obj,arg1,arg2,arg3)
VALUE obj,arg1,arg2,arg3;
{
	GLenum target;
	GLdouble s;
	GLdouble t;
	LOAD_GL_FUNC(glMultiTexCoord2d,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLdouble)NUM2DBL(arg2);
	t = (GLdouble)NUM2DBL(arg3);
	fptr_glMultiTexCoord2d(target,s,t);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord2f)(GLenum,GLfloat,GLfloat);
static VALUE
gl_MultiTexCoord2f(obj,arg1,arg2,arg3)
VALUE obj,arg1,arg2,arg3;
{
	GLenum target;
	GLfloat s;
	GLfloat t;
	LOAD_GL_FUNC(glMultiTexCoord2f,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLfloat)NUM2DBL(arg2);
	t = (GLfloat)NUM2DBL(arg3);
	fptr_glMultiTexCoord2f(target,s,t);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord2i)(GLenum,GLint,GLint);
static VALUE
gl_MultiTexCoord2i(obj,arg1,arg2,arg3)
VALUE obj,arg1,arg2,arg3;
{
	GLenum target;
	GLint s;
	GLint t;
	LOAD_GL_FUNC(glMultiTexCoord2i,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLint)NUM2INT(arg2);
	t = (GLint)NUM2INT(arg3);
	fptr_glMultiTexCoord2i(target,s,t);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord2s)(GLenum,GLshort,GLshort);
static VALUE
gl_MultiTexCoord2s(obj,arg1,arg2,arg3)
VALUE obj,arg1,arg2,arg3;
{
	GLenum target;
	GLshort s;
	GLshort t;
	LOAD_GL_FUNC(glMultiTexCoord2s,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLshort)NUM2INT(arg2);
	t = (GLshort)NUM2INT(arg3);
	fptr_glMultiTexCoord2s(target,s,t);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord3d)(GLenum,GLdouble,GLdouble,GLdouble);
static VALUE
gl_MultiTexCoord3d(obj,arg1,arg2,arg3,arg4)
VALUE obj,arg1,arg2,arg3,arg4;
{
	GLenum target;
	GLdouble s;
	GLdouble t;
	GLdouble r;
	LOAD_GL_FUNC(glMultiTexCoord3d,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLdouble)NUM2DBL(arg2);
	t = (GLdouble)NUM2DBL(arg3);
	r = (GLdouble)NUM2DBL(arg4);
	fptr_glMultiTexCoord3d(target,s,t,r);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord3f)(GLenum,GLfloat,GLfloat,GLfloat);
static VALUE
gl_MultiTexCoord3f(obj,arg1,arg2,arg3,arg4)
VALUE obj,arg1,arg2,arg3,arg4;
{
	GLenum target;
	GLfloat s;
	GLfloat t;
	GLfloat r;
	LOAD_GL_FUNC(glMultiTexCoord3f,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLfloat)NUM2DBL(arg2);
	t = (GLfloat)NUM2DBL(arg3);
	r = (GLfloat)NUM2DBL(arg4);
	fptr_glMultiTexCoord3f(target,s,t,r);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord3i)(GLenum,GLint,GLint,GLint);
static VALUE
gl_MultiTexCoord3i(obj,arg1,arg2,arg3,arg4)
VALUE obj,arg1,arg2,arg3,arg4;
{
	GLenum target;
	GLint s;
	GLint t;
	GLint r;
	LOAD_GL_FUNC(glMultiTexCoord3i,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLint)NUM2INT(arg2);
	t = (GLint)NUM2INT(arg3);
	r = (GLint)NUM2INT(arg4);
	fptr_glMultiTexCoord3i(target,s,t,r);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord3s)(GLenum,GLshort,GLshort,GLshort);
static VALUE
gl_MultiTexCoord3s(obj,arg1,arg2,arg3,arg4)
VALUE obj,arg1,arg2,arg3,arg4;
{
	GLenum target;
	GLshort s;
	GLshort t;
	GLshort r;
	LOAD_GL_FUNC(glMultiTexCoord3s,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLshort)NUM2INT(arg2);
	t = (GLshort)NUM2INT(arg3);
	r = (GLshort)NUM2INT(arg4);
	fptr_glMultiTexCoord3s(target,s,t,r);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord4d)(GLenum,GLdouble,GLdouble,GLdouble,GLdouble);
static VALUE
gl_MultiTexCoord4d(obj,arg1,arg2,arg3,arg4,arg5)
VALUE obj,arg1,arg2,arg3,arg4,arg5;
{
	GLenum target;
	GLdouble s;
	GLdouble t;
	GLdouble r;
	GLdouble q;
	LOAD_GL_FUNC(glMultiTexCoord4d,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLdouble)NUM2DBL(arg2);
	t = (GLdouble)NUM2DBL(arg3);
	r = (GLdouble)NUM2DBL(arg4);
	q = (GLdouble)NUM2DBL(arg5);
	fptr_glMultiTexCoord4d(target,s,t,r,q);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord4f)(GLenum,GLfloat,GLfloat,GLfloat,GLfloat);
static VALUE
gl_MultiTexCoord4f(obj,arg1,arg2,arg3,arg4,arg5)
VALUE obj,arg1,arg2,arg3,arg4,arg5;
{
	GLenum target;
	GLfloat s;
	GLfloat t;
	GLfloat r;
	GLfloat q;
	LOAD_GL_FUNC(glMultiTexCoord4f,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLfloat)NUM2DBL(arg2);
	t = (GLfloat)NUM2DBL(arg3);
	r = (GLfloat)NUM2DBL(arg4);
	q = (GLfloat)NUM2DBL(arg5);
	fptr_glMultiTexCoord4f(target,s,t,r,q);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord4i)(GLenum,GLint,GLint,GLint,GLint);
static VALUE
gl_MultiTexCoord4i(obj,arg1,arg2,arg3,arg4,arg5)
VALUE obj,arg1,arg2,arg3,arg4,arg5;
{
	GLenum target;
	GLint s;
	GLint t;
	GLint r;
	GLint q;
	LOAD_GL_FUNC(glMultiTexCoord4i,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLint)NUM2INT(arg2);
	t = (GLint)NUM2INT(arg3);
	r = (GLint)NUM2INT(arg4);
	q = (GLint)NUM2INT(arg5);
	fptr_glMultiTexCoord4i(target,s,t,r,q);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glMultiTexCoord4s)(GLenum,GLshort,GLshort,GLshort,GLshort);
static VALUE
gl_MultiTexCoord4s(obj,arg1,arg2,arg3,arg4,arg5)
VALUE obj,arg1,arg2,arg3,arg4,arg5;
{
	GLenum target;
	GLshort s;
	GLshort t;
	GLshort r;
	GLshort q;
	LOAD_GL_FUNC(glMultiTexCoord4s,1,3)
	target = (GLenum)NUM2INT(arg1);
	s = (GLshort)NUM2INT(arg2);
	t = (GLshort)NUM2INT(arg3);
	r = (GLshort)NUM2INT(arg4);
	q = (GLshort)NUM2INT(arg5);
	fptr_glMultiTexCoord4s(target,s,t,r,q);
	CHECK_GLERROR
	return Qnil;
}

#define GLMULTITEXCOORD_VFUNC(_type_) \
static VALUE \
gl_MultiTexCoord##_type_##v(argc,argv,obj) \
int argc; \
VALUE *argv; \
VALUE obj; \
{ \
	int num; \
	VALUE args[5]; \
	RArray *ary; \
	switch (num = rb_scan_args(argc, argv, "23", &args[0], &args[1], &args[2], &args[3],&args[4])) { \
	case 2: \
		if (TYPE(args[1]) == T_ARRAY) { \
		ary = RARRAY(args[1]); \
		switch (ary->len) { \
			case 1: \
			gl_MultiTexCoord1##_type_(obj,args[0],ary->ptr[0]); \
			break; \
			case 2: \
			gl_MultiTexCoord2##_type_(obj,args[0],ary->ptr[0],ary->ptr[1]); \
			break; \
			case 3: \
			gl_MultiTexCoord3##_type_(obj,args[0],ary->ptr[0],ary->ptr[1],ary->ptr[2]); \
			break; \
			case 4: \
			gl_MultiTexCoord4##_type_(obj,args[0],ary->ptr[0],ary->ptr[1],ary->ptr[2],ary->ptr[3]); \
			break; \
			default: \
			rb_raise(rb_eArgError, "array length:%d", num); \
		} \
		} \
		else {	\
			gl_MultiTexCoord1##_type_(obj,args[0], args[1]); \
			break; \
		} \
		break; \
	case 3: \
		gl_MultiTexCoord2##_type_(obj,args[0], args[1], args[2]); \
		break; \
	case 4: \
		gl_MultiTexCoord3##_type_(obj,args[0], args[1], args[2], args[3]); \
		break; \
	case 5: \
		gl_MultiTexCoord4##_type_(obj,args[0], args[1], args[2], args[3], args[4]); \
		break; \
	default: \
		rb_raise(rb_eArgError, "too many arguments"); \
		break; \
	} \
	return Qnil; \
}

GLMULTITEXCOORD_VFUNC(d)
GLMULTITEXCOORD_VFUNC(f)
GLMULTITEXCOORD_VFUNC(i)
GLMULTITEXCOORD_VFUNC(s)
#undef GLTEXCOORD_VFUNC

#define TRANSPOSEMATRIX_FUNC(_name_,_type_) \
static void (APIENTRY * fptr_gl##_name_)(const _type_[]); \
static VALUE \
gl_##_name_(obj,arg1) \
VALUE obj,arg1; \
{ \
	_type_ m[4*4]; \
	LOAD_GL_FUNC(gl##_name_,2,0) \
	ary2cmat##_type_(arg1, m, 4, 4); \
	fptr_gl##_name_(m); \
	CHECK_GLERROR \
	return Qnil; \
}

TRANSPOSEMATRIX_FUNC(LoadTransposeMatrixf,float)
TRANSPOSEMATRIX_FUNC(LoadTransposeMatrixd,double)
TRANSPOSEMATRIX_FUNC(MultTransposeMatrixf,float)
TRANSPOSEMATRIX_FUNC(MultTransposeMatrixd,double)

#undef TRANSPOSEMATRIX_FUNC

static void (APIENTRY * fptr_glSampleCoverage)(GLclampf,GLboolean);
static VALUE
gl_SampleCoverage(obj,arg1,arg2)
VALUE obj,arg1,arg2;
{
	GLclampf value;
	GLboolean invert;
	LOAD_GL_FUNC(glSampleCoverage,1,3)
	value = (GLclampf)NUM2DBL(arg1);
	invert = (GLboolean)NUM2INT(arg2);
	fptr_glSampleCoverage(value,invert);
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexImage3D)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLsizei,GLint,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexImage3D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9;
{
	GLenum target;
	GLint level;
	GLenum internalformat;
	GLsizei width;
	GLsizei height;
	GLsizei depth;
	GLint border;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexImage3D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	internalformat = (GLenum)NUM2INT(arg3);
	width = (GLsizei)NUM2UINT(arg4);
	height = (GLsizei)NUM2UINT(arg5);
	depth = (GLsizei)NUM2UINT(arg6);
	border = (GLint)NUM2INT(arg7);
	imagesize = (GLsizei)NUM2UINT(arg8);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexImage3D(target,level,internalformat,width,height,depth,border,imagesize,(GLvoid *)NUM2INT(arg9));
	} else {
		if (TYPE(arg9) == T_STRING) {
			if (RSTRING(arg9)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg9)->len);
			pixels = RSTRING(arg9)->ptr;
		} else if (NIL_P(arg9)) {
			pixels = NULL;
		} else {
			Check_Type(arg9,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexImage3D(target,level,internalformat,width,height,depth,border,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexImage2D)(GLenum,GLint,GLenum,GLsizei,GLsizei,GLint,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexImage2D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8;
{
	GLenum target;
	GLint level;
	GLenum internalformat;
	GLsizei width;
	GLsizei height;
	GLint border;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexImage2D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	internalformat = (GLenum)NUM2INT(arg3);
	width = (GLsizei)NUM2UINT(arg4);
	height = (GLsizei)NUM2UINT(arg5);
	border = (GLint)NUM2INT(arg6);
	imagesize = (GLsizei)NUM2UINT(arg7);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexImage2D(target,level,internalformat,width,height,border,imagesize,(GLvoid *)NUM2INT(arg8));
	} else {
		if (TYPE(arg8) == T_STRING) {
			if (RSTRING(arg8)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg8)->len);
			pixels = RSTRING(arg8)->ptr;
		} else if (NIL_P(arg8)) {
			pixels = NULL;
		} else {
			Check_Type(arg8,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexImage2D(target,level,internalformat,width,height,border,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexImage1D)(GLenum,GLint,GLenum,GLsizei,GLint,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexImage1D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7;
{
	GLenum target;
	GLint level;
	GLenum internalformat;
	GLsizei width;
	GLint border;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexImage1D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	internalformat = (GLenum)NUM2INT(arg3);
	width = (GLsizei)NUM2UINT(arg4);
	border = (GLint)NUM2INT(arg5);
	imagesize = (GLsizei)NUM2UINT(arg6);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexImage1D(target,level,internalformat,width,border,imagesize,(GLvoid *)NUM2INT(arg7));
	} else {
		if (TYPE(arg7) == T_STRING) {
			if (RSTRING(arg7)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg7)->len);
			pixels = RSTRING(arg7)->ptr;
		} else if (NIL_P(arg7)) {
			pixels = NULL;
		} else {
			Check_Type(arg7,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexImage1D(target,level,internalformat,width,border,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexSubImage3D)(GLenum,GLint,GLint,GLint,GLint,GLsizei,GLsizei,GLsizei,GLenum,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexSubImage3D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11;
{
	GLenum target;
	GLint level;
	GLint xoffset;
	GLint yoffset;
	GLint zoffset;
	GLsizei width;
	GLsizei height;
	GLsizei depth;
	GLenum format;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexSubImage3D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	xoffset = (GLint)NUM2INT(arg3);
	yoffset = (GLint)NUM2INT(arg4);
	zoffset = (GLint)NUM2INT(arg5);
	width = (GLsizei)NUM2UINT(arg6);
	height = (GLsizei)NUM2UINT(arg7);
	depth = (GLsizei)NUM2UINT(arg8);
	format = (GLenum)NUM2INT(arg9);
	imagesize = (GLsizei)NUM2UINT(arg10);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexSubImage3D(target,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,(GLvoid *)NUM2INT(arg11));
	} else {
		if (TYPE(arg11) == T_STRING) {
			if (RSTRING(arg11)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg11)->len);
			 pixels = RSTRING(arg11)->ptr;
		} else {
			Check_Type(arg11,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexSubImage3D(target,level,xoffset,yoffset,zoffset,width,height,depth,format,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexSubImage2D)(GLenum,GLint,GLint,GLint,GLsizei,GLsizei,GLenum,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexSubImage2D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9;
{
	GLenum target;
	GLint level;
	GLint xoffset;
	GLint yoffset;
	GLsizei width;
	GLsizei height;
	GLenum format;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexSubImage2D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	xoffset = (GLint)NUM2INT(arg3);
	yoffset = (GLint)NUM2INT(arg4);
	width = (GLsizei)NUM2UINT(arg5);
	height = (GLsizei)NUM2UINT(arg6);
	format = (GLenum)NUM2INT(arg7);
	imagesize = (GLsizei)NUM2UINT(arg8);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexSubImage2D(target,level,xoffset,yoffset,width,height,format,imagesize,(GLvoid *)NUM2INT(arg9));
	} else {
		if (TYPE(arg9) == T_STRING) {
			if (RSTRING(arg9)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg9)->len);
			 pixels = RSTRING(arg9)->ptr;
		} else {
			Check_Type(arg9,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexSubImage2D(target,level,xoffset,yoffset,width,height,format,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glCompressedTexSubImage1D)(GLenum,GLint,GLint,GLsizei,GLenum,GLsizei,GLvoid*);
static VALUE
gl_CompressedTexSubImage1D(obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7)
VALUE obj,arg1,arg2,arg3,arg4,arg5,arg6,arg7;
{
	GLenum target;
	GLint level;
	GLint xoffset;
	GLsizei width;
	GLenum format;
	GLsizei imagesize;
	GLvoid *pixels;
	LOAD_GL_FUNC(glCompressedTexSubImage1D,1,3)
	target = (GLenum)NUM2INT(arg1);
	level = (GLint)NUM2INT(arg2);
	xoffset = (GLint)NUM2INT(arg3);
	width = (GLsizei)NUM2UINT(arg4);
	format = (GLenum)NUM2INT(arg5);
	imagesize = (GLsizei)NUM2UINT(arg6);
	if (CheckBufferBinding(GL_PIXEL_UNPACK_BUFFER_BINDING)) {
		fptr_glCompressedTexSubImage1D(target,level,xoffset,width,format,imagesize,(GLvoid *)NUM2INT(arg7));
	} else {
		if (TYPE(arg7) == T_STRING) {
			if (RSTRING(arg7)->len < imagesize)
				rb_raise(rb_eArgError, "string length:%d",RSTRING(arg7)->len);
			 pixels = RSTRING(arg7)->ptr;
		} else {
			Check_Type(arg7,T_STRING); /* force exception */
			return Qnil;
		}
		fptr_glCompressedTexSubImage1D(target,level,xoffset,width,format,imagesize,pixels);
	}
	CHECK_GLERROR
	return Qnil;
}

static void (APIENTRY * fptr_glGetCompressedTexImage)(GLenum,GLint,GLvoid*);
static VALUE
gl_GetCompressedTexImage(argc,argv,obj)
int argc;
VALUE *argv;
VALUE obj;
{
	GLenum target;
	GLint lod;
	GLsizei size = 0;
	VALUE data;
	VALUE args[3];
	int numargs;
	LOAD_GL_FUNC(glGetCompressedTexImage,1,3)
	numargs = rb_scan_args(argc, argv, "21", &args[0], &args[1], &args[2]);
	target = (GLenum)NUM2INT(args[0]);
	lod = (GLenum)NUM2INT(args[1]);
	switch(numargs) {
		default:
		case 2:
			if (CheckBufferBinding(GL_PIXEL_PACK_BUFFER_BINDING))
				rb_raise(rb_eArgError, "Pixel pack buffer bound, but offset argument missing");
			glGetTexLevelParameteriv(target,lod,GL_TEXTURE_COMPRESSED_IMAGE_SIZE,&size); /* 1.0 function */
			CHECK_GLERROR
			data = allocate_buffer_with_string(size);
			fptr_glGetCompressedTexImage(target,lod,(GLvoid*)RSTRING(data)->ptr);
			CHECK_GLERROR
			return data;
		case 3:
			fptr_glGetCompressedTexImage(target,lod,(GLvoid*)NUM2INT(args[2]));
			CHECK_GLERROR
			return Qnil;	
	}
}

void gl_init_functions_1_3(VALUE module)
{
	rb_define_module_function(module, "glActiveTexture", gl_ActiveTexture, 1);
	rb_define_module_function(module, "glClientActiveTexture", gl_ClientActiveTexture, 1);
	rb_define_module_function(module, "glMultiTexCoord1d", gl_MultiTexCoord1d, 2);
	rb_define_module_function(module, "glMultiTexCoord1f", gl_MultiTexCoord1f, 2);
	rb_define_module_function(module, "glMultiTexCoord1i", gl_MultiTexCoord1i, 2);
	rb_define_module_function(module, "glMultiTexCoord1s", gl_MultiTexCoord1s, 2);
	rb_define_module_function(module, "glMultiTexCoord2d", gl_MultiTexCoord2d, 3);
	rb_define_module_function(module, "glMultiTexCoord2f", gl_MultiTexCoord2f, 3);
	rb_define_module_function(module, "glMultiTexCoord2i", gl_MultiTexCoord2i, 3);
	rb_define_module_function(module, "glMultiTexCoord2s", gl_MultiTexCoord2s, 3);
	rb_define_module_function(module, "glMultiTexCoord3d", gl_MultiTexCoord3d, 4);
	rb_define_module_function(module, "glMultiTexCoord3f", gl_MultiTexCoord3f, 4);
	rb_define_module_function(module, "glMultiTexCoord3i", gl_MultiTexCoord3i, 4);
	rb_define_module_function(module, "glMultiTexCoord3s", gl_MultiTexCoord3s, 4);
	rb_define_module_function(module, "glMultiTexCoord4d", gl_MultiTexCoord4d, 5);
	rb_define_module_function(module, "glMultiTexCoord4f", gl_MultiTexCoord4f, 5);
	rb_define_module_function(module, "glMultiTexCoord4i", gl_MultiTexCoord4i, 5);
	rb_define_module_function(module, "glMultiTexCoord4s", gl_MultiTexCoord4s, 5);
	rb_define_module_function(module, "glLoadTransposeMatrixf", gl_LoadTransposeMatrixf, 1);
	rb_define_module_function(module, "glLoadTransposeMatrixd", gl_LoadTransposeMatrixd, 1);
	rb_define_module_function(module, "glMultTransposeMatrixf", gl_MultTransposeMatrixf, 1);
	rb_define_module_function(module, "glMultTransposeMatrixd", gl_MultTransposeMatrixd, 1);
	rb_define_module_function(module, "glSampleCoverage", gl_SampleCoverage, 2);
	rb_define_module_function(module, "glCompressedTexImage3D", gl_CompressedTexImage3D, 9);
	rb_define_module_function(module, "glCompressedTexImage2D", gl_CompressedTexImage2D, 8);
	rb_define_module_function(module, "glCompressedTexImage1D", gl_CompressedTexImage1D, 7);
	rb_define_module_function(module, "glCompressedTexSubImage3D", gl_CompressedTexSubImage3D, 11);
	rb_define_module_function(module, "glCompressedTexSubImage2D", gl_CompressedTexSubImage2D, 9);
	rb_define_module_function(module, "glCompressedTexSubImage1D", gl_CompressedTexSubImage1D, 7);
	rb_define_module_function(module, "glGetCompressedTexImage", gl_GetCompressedTexImage, -1);

	/* Additional functions */

	rb_define_module_function(module, "glMultiTexCoord", gl_MultiTexCoorddv, -1);
	rb_define_module_function(module, "glMultiTexCoord1dv", gl_MultiTexCoorddv, -1);
	rb_define_module_function(module, "glMultiTexCoord1fv", gl_MultiTexCoordfv, -1);
	rb_define_module_function(module, "glMultiTexCoord1iv", gl_MultiTexCoordiv, -1);
	rb_define_module_function(module, "glMultiTexCoord1sv", gl_MultiTexCoordsv, -1);
	rb_define_module_function(module, "glMultiTexCoord2dv", gl_MultiTexCoorddv, -1);
	rb_define_module_function(module, "glMultiTexCoord2fv", gl_MultiTexCoordfv, -1);
	rb_define_module_function(module, "glMultiTexCoord2iv", gl_MultiTexCoordiv, -1);
	rb_define_module_function(module, "glMultiTexCoord2sv", gl_MultiTexCoordsv, -1);
	rb_define_module_function(module, "glMultiTexCoord3dv", gl_MultiTexCoorddv, -1);
	rb_define_module_function(module, "glMultiTexCoord3fv", gl_MultiTexCoordfv, -1);
	rb_define_module_function(module, "glMultiTexCoord3iv", gl_MultiTexCoordiv, -1);
	rb_define_module_function(module, "glMultiTexCoord3sv", gl_MultiTexCoordsv, -1);
	rb_define_module_function(module, "glMultiTexCoord4dv", gl_MultiTexCoorddv, -1);
	rb_define_module_function(module, "glMultiTexCoord4fv", gl_MultiTexCoordfv, -1);
	rb_define_module_function(module, "glMultiTexCoord4iv", gl_MultiTexCoordiv, -1);
	rb_define_module_function(module, "glMultiTexCoord4sv", gl_MultiTexCoordsv, -1);
}
