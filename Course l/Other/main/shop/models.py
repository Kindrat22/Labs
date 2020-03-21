from django.db import models

class Item (models.Model):
    name = models.CharField(max_length= 50)
    quantity = models.IntegerField()
    status = models.CharField(max_length=15)
    complete = models.BooleanField(default=False)
    objects = models.Manager()

    def __str__(self):
        return 'Item Name: {}'.format(self.name)

class User (models.Model):
    username = models.CharField(max_length=20)
    email = models.CharField(max_length=50)
    password = models.CharField(max_length=50)
    phone = models.IntegerField()
    objects = models.Manager()

    def __str__(self):
        return 'Name: {}'.format(self.username)

