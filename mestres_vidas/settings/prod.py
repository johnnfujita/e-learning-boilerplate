from .base import *
DEBUG = False
ADMINS = (
    ('Founder Zero', 'founder.zero@virtualdemocracies.com'),
)
ALLOWED_HOSTS = ['*']
DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.postgresql',
        'NAME': 'mestres_vidas_db',
        'USER': 'postgres',
        'PASSWORD': 'postgres',
        'HOST': 'localhost'
    }
}

SECURE_SSL_REDIRECT = True
CSRF_COOKIE_SECURE = True